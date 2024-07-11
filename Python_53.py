```
def add(x: int, y: int):
    return x + y


x = int(input("Enter first number: "))
y = int(input("Enter second number: "))

print(f"The sum of {x} and {y} is {add(x, y)}")
print(f"The sum of {x} and {-1} is {add(x, -1)}")
print(f"The sum of {10} and {-5} is {add(10, -5)}")