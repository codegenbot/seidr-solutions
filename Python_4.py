while True:
    try:
        numbers = list(
            map(float, input("Enter the numbers separated by space: ").split())
        )
        if len(numbers) == 0:
            raise ValueError
        print(sum(numbers))
        break
    except (ValueError, TypeError):
        print("Invalid input. Please enter numbers separated by space.")