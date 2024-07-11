def add():
    x = None
    y = None
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    if x < 0 or y < 0:
        return -1 * (abs(x) + abs(y))
    else:
        return x + y

print(add())