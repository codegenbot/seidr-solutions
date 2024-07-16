try:
    while True:
        numbers = input("Enter a list of numbers separated by spaces: ").strip()
        numbers = list(map(int, numbers.split()))
        if len(numbers) == 0:
            raise ValueError
        print("Sum of input numbers:", sum(numbers))
        break
except ValueError:
    print("Invalid input. Please make sure to enter numbers separated by spaces.")
    print("Example input: 1 2 3")
except Exception:
    print("Error reading input. Please make sure to enter numbers separated by spaces.")