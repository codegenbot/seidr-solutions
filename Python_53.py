def add(a: int, b: int) -> int:
    return a + b

print("Please enter two integers.")
while True:
    try:
        a = int(input("Enter the first number: "))
        b = int(input("Enter the second number: "))
        result = add(a, b)
        print(result)
        break
    except ValueError:
        print("Please enter integers only")