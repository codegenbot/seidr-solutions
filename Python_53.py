```
def add(x: int, y: int):
    print(f"Adding {x} and {y}")
    return x + y

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
result = add(num1, num2)
print(f"The result is {result}")