def calculate_sum():
    while True:
        print("Please enter two integers separated by a space.")
        try:
            input_str = input("Enter first and second numbers: ")
            if len(input_str.split()) != 2:
                raise ValueError
            x, y = map(int, input_str.split())
            print(f"Sum is: {x + y}")
            choice = input("Do you want to continue? (yes/no): ")
            if choice.lower() != 'yes':
                break
        except ValueError:
            print("Invalid input. Please enter valid integers.")

calculate_sum()