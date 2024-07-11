```
def add(a):
    while True:
        try:
            a = int(input("Enter first number: "))
            b = int(input("Enter second number: "))
            print(a + b)
        except ValueError:
            print("Invalid input. Please enter an integer.")
            break