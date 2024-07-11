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
            if cont.lower() != 'yes':
                break

result = add()
print(result)