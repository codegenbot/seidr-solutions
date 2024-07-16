while True:
    try:
        numbers = [
            int(x)
            for x in input("Enter a list of numbers separated by spaces: ").split()
        ]
        if not numbers:
            raise ValueError("Empty input. Please enter at least one number.")
        else:
            break
    except ValueError as e:
        print("Invalid input:", e)
        print("Example input: 1 2 3")