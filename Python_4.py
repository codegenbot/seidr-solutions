try:
    numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").strip().split()))
    if not numbers:
        raise ValueError
    print("Sum of input numbers:", sum(numbers))
except ValueError:
    print("Invalid input. Please make sure to enter numbers separated by spaces.")
    print("Example input: 1 2 3")
except Exception:
    print("Error reading input. Please make sure to enter numbers separated by spaces.")