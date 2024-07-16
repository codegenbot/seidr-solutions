while True:
    try:
        numbers = list(
            map(float, input("Enter the numbers separated by space: ").split())
        )
        if not numbers:
            raise ValueError
        print(sum(numbers))
        break
    except (ValueError, TypeError):
        print("Invalid input. Please enter numbers separated by space.")