```
def add(x: int, y: int):
    return x + y

num1 = 0
num2 = 0

while True:
    try:
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))

        if num1 >= 0 and num2 >= 0:  
            print(add(num1, num2))
            break
        else:
            print("Please enter non-negative numbers.")
    except ValueError:
        print("Invalid input. Please try again.")