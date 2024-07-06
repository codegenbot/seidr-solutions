"""
def add(x: int, y: int):
    return x + y

num1 = None
num2 = None

while True:
    try:
        while num1 is None:
            num1 = int(input("Enter first number (or -1 to quit): "))
            if num1 == -1:
                break
        while num2 is None:
            num2 = int(input("Enter second number: "))
            if num1 < 0 and num2 >= 0 or num1 >= 0 and num2 < 0:
                print("Please enter non-negative numbers.")
                num2 = None
        print(add(num1, num2))
        break
    except ValueError:
        print("Invalid input. Please try again.")