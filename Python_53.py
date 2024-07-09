```
def add(a=0, b=0):
    while True:
        try:
            x = int(input("Enter the first number: ") or str(a))
            y = int(input("Enter the second number: ") or str(b))
            print(x + y)
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")