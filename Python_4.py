try:
    numbers = [
        int(x) for x in input("Enter a list of numbers separated by spaces: ").split()
    ]
    if not numbers:
        raise ValueError("Empty input. Please enter at least one number.")
except ValueError as e:
    print("Invalid input. Please make sure to enter numbers separated by spaces.")
    print("Example input: 1 2 3")
except Exception as e:
    print("Error reading input. Please make sure to enter numbers separated by spaces.")