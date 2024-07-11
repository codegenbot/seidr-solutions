x = int(input("Enter first number: "))
y = int(input("Enter second number: "))


def add(x: int, y: int):
    return x + y


result = add(x, y)
print(f"The sum is {result}")