def add(a: int, b: int) -> int:
    return a + b

try:
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))
except ValueError:
    print("Please enter integers only")
else:
    result = add(a, b)
    print(result)