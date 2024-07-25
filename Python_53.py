def calculate_sum():
    while True:
        print("Please enter two integers separated by a space.")
        try:
            x, y = map(int, input("Enter first and second numbers: ").split())
            print(f"Sum is: {x + y}")
            choice = input("Do you want to continue? (yes/no): ")
            if choice.lower() != 'yes':
                break
        except ValueError:
            print("Invalid input. Please enter valid integers.")

calculate_sum()