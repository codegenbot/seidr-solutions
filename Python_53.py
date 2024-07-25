def calculate_sum():
    while True:
        try:
            x = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    y = int(input("Enter second number: "))
    print(x + y)


calculate_sum()