```
def check(operation):
    if operation == 'square':
        num = float(input("Enter number: "))
        result = num ** 2
        print(f"The square of {num} is {result}")
    elif operation == 'cube':
        num = float(input("Enter number: "))
        result = num ** 3
        print(f"The cube of {num} is {result}")
    else:
        print("Invalid operation. Please enter 'square' or 'cube'"