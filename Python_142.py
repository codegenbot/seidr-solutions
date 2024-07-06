```
def calculate_power():
    operation = input("Enter 'square' or 'cube': ")
    if operation == 'square':
        number = int(input("Enter a number: "))
        return number ** 2
    elif operation == 'cube':
        number = int(input("Enter a number: "))
        return number ** 3
    else:
        print("Invalid operation. Please enter 'square' or 'cube'")
        
print(calculate_power())