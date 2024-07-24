```
def check(func):
    result = func()
    print(f"The sum is: {result}")

def add_numbers():
    print("Please enter two numbers.")
    x = int(input("Enter first number: "))
    y = int(input("Enter second number: "))
    return x + y

check(add_numbers)