def add(x: int, y: int):
    return x + y


# Read input from user
while True:
    x = int(input("Enter first number: "))
    if x == "done":
        break
    y = int(input("Enter second number: "))
    print(add(x, y))