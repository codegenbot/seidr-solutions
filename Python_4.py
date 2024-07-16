try:
    user_input = input("Enter a list of numbers separated by spaces: ")
    if user_input:
        numbers = [float(x) for x in user_input.split()]
    else:
        raise ValueError("Empty input. Please enter at least one number.")
except ValueError as e:
    print(f"Invalid input: {e}")
    print("Please enter numbers separated by spaces.")
    print("Example input: 1.5 2.7 3.0")