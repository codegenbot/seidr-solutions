```Python
def add(x: int, y: int):
    return x + y if (x < 0 and y >= 0) or (x >= 0 and y < 0) else -1 * abs(x - y)

while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        print(add(x, y))  
        cont = input("Do you want to continue? (y/n): ")
        if cont.lower() != 'y':
            break
    except ValueError:
        print("Invalid input. Please enter whole numbers.")