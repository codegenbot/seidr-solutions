```
def add(x: int, y: int):
    return x + y

num1 = input("Enter first number: ")
num2 = input("Enter second number: ")

try:
    num1 = int(num1)
    num2 = int(num2)

    print(f"The sum of {num1} and {num2} is {add(num1, num2)}")
except ValueError:
    print("Program did not receive expected input")