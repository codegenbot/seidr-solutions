try:
    numbers = list(map(float, input("Enter four numbers separated by space: ").strip().split()))
    if len(numbers) != 4:
        raise ValueError
    result = sum(numbers)
    print(result)
except ValueError:
    print("Invalid input. Please enter exactly four numbers separated by space.")