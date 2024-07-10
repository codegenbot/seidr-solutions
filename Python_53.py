def add(a: int, b: int) -> int:
    return a + b


while True:
    try:
        a = int(input("Enter the first integer: "))
        b = int(input("Enter the second integer: "))
        result = add(a, b)
        print(result)
        break
    except ValueError:
        print("Please enter integers only")