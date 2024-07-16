while True:
    try:
        numbers = list(
            map(lambda x: float(x) if x.replace('.', '', 1).isdigit() else None, input("Enter the numbers separated by space: ").split())
        )
        if any(num is None for num in numbers) or len(numbers) == 0:
            raise ValueError
        print(sum(numbers))
        break
    except (ValueError, TypeError):
        print("Invalid input. Please enter numbers separated by space.")