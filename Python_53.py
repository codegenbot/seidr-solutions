def add(x: float, y: float) -> float:
    return x + y

x = float(input("Enter a number for x: "))
y = float(input("Enter a number for y: "))
result = add(x, y)
print(f"The sum of {x} and {y} is {result}")