def add(op: str, x: float, y: float) -> float:
    if op == "+":
        return x + y
    elif op == "-":
        return x - y
    elif op == "/":
        return x / y
    else:
        return x * y

op = input("Enter '+', '-', '/', or '*': ")
x = float(input("Enter a number for x: "))
y = float(input("Enter a number for y: "))
result = add(op, x, y)
print(f"The sum of {x} and {y} is {result}")