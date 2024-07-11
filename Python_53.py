```
def add(x: int, y: int):
    print(f"Adding {x} and {y}")
    result = x + y
    print(f"The result is {result}")
    return result

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
add(num1, num2)