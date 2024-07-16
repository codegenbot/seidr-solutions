while True:
    try:
        numbers = list(
            map(int, input().split())
        )
        print("Sum of input numbers:", sum(numbers))
        break
    except ValueError:
        print("Invalid input. Please make sure to enter numbers separated by spaces.")
    except EOFError:
        print("No input provided. Please enter a list of numbers separated by spaces.")
    except KeyboardInterrupt:
        print("Keyboard Interrupt. Exiting program.")
        break
    except Exception:
        print(
            "Error reading input. Please make sure to enter numbers separated by spaces."
        )