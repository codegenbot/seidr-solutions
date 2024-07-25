def calculate_sum():
    while True:
        print("Please enter two integers separated by a space.")
        try:
            x, y = map(int, input("Enter first and second numbers: ").split())
            if not (isinstance(x, int) and isinstance(y, int)):
                raise ValueError
            print(f"Sum is: {x + y}")
            choice = input("Do you want to continue? (yes/no): ")
            if choice.lower() != 'yes':
                break
        except ValueError:
            print("Invalid input. Please enter valid integers.")

calculate_sum()