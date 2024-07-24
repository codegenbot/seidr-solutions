```
def add_numbers():
    while True:
        try:
            print("Please enter two numbers.")
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            result = x + y
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() != 'y':
                return
        except ValueError:
            print("Invalid input. Please enter a number.")

result = add_numbers()
print(result)