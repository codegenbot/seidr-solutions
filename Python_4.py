while True:
    try:
        numbers = list(
            map(int, input("Enter a list of numbers separated by spaces: ").split())
        )
        print("Sum of input numbers:", sum(numbers))
        break
    except ValueError:
        print("Invalid input. Please make sure to enter numbers separated by spaces.")
    except Exception:
        print(
            "Error reading input. Please make sure to enter numbers separated by spaces."
        )