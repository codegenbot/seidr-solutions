def add(x: int, y: int) -> int:
    return x + y

x_input = input("Enter first number: ")
y_input = input("Enter second number: ")

if x_input.isdigit() and y_input.isdigit():
    x = int(x_input)
    y = int(y_input)
    result = add(x, y)
    print(result)
else:
    print("Invalid input. Please enter integers only.")