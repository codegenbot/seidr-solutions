try:
    while True:
        numbers = input("Enter a list of numbers separated by spaces: ").strip()
        if not numbers:
            raise ValueError
        numbers = list(map(int, numbers.split()))
        print("Sum of input numbers:", sum(numbers))
        break
except ValueError:
    print("Invalid input. Please make sure to enter numbers separated by spaces.")
    print("Example input: 1 2 3")
except EOFError:
    print("EOFError: No input provided.")
except Exception:
    print("Error reading input. Please make sure to enter numbers separated by spaces.")