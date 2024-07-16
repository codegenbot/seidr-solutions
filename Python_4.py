while True:
    try:
        numbers = list(
            map(int, input("Enter a list of numbers separated by spaces: ").split())
        )
        if not numbers:
            raise ValueError("No input provided.")
        print("Sum of input numbers:", sum(numbers))
        break
    except ValueError as e:
        if "invalid literal" in str(e):
            print("Invalid input. Please make sure to enter numbers separated by spaces.")
        else:
            print(str(e))
    except Exception as e:
        print("Error reading input. Please make sure to enter numbers separated by spaces.")