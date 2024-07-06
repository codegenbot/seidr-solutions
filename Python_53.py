```
def add(x: int, y: int):
    while True:
        try:
            x = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    while True:
        try:
            y = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
            
    return x + y