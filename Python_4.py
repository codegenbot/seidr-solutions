numbers = []
try:
    numbers = [float(x) for x in input("Enter a list of numbers separated by spaces: ").split()]
    if not numbers:
        raise ValueError("Empty input. Please enter at least one number.")
except ValueError as e:
    print(f"Error: {e}")