def add(x: int, y: int) -> int:
    return x + y

x = input("Enter first number: ")
y = input("Enter second number: ")

if x.isdigit() and y.isdigit():
    result = add(int(x), int(y))
    print(result)
else:
    print("Invalid input. Please enter integers only.")