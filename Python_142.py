```Python
def calculate(operation, num):
    if operation == 'square':
        return num ** 2
    elif operation == 'cube':
        return num ** 3
    else:
        print("Invalid operation. Please enter 'square' or 'cube'")

num = float(input('Enter a number: '))
operation = input('Choose an operation (square/cube): ')
print(calculate(operation, num))