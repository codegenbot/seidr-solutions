```
def add():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            if x >= 0 and y >= 0:
                return x + y
        except ValueError:
            print("Invalid input. Please enter a positive integer.")
            cont = input("Continue? (yes/no): ")
            while cont.lower() != 'yes':
                print("Please enter 'yes' to continue.")
                cont = input("Continue? (yes/no): ")
    return None

result = add()
print(result)