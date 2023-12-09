
>>> #!/usr/bin/env python
def add(x: int, y: int):
    return x + y

x = int(input("Enter first number: "))
y = int(input("Enter second number: "))
result = add(x, y)
print(f"The sum of {x} and {y} is {result}")