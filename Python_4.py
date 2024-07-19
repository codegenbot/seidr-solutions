try:
    user_input = raw_input("Enter exactly four numbers separated by space: ").strip().split()
    numbers = list(map(float, user_input))
    if len(numbers) != 4:
        raise ValueError
    result = sum(numbers)
    print(result)
except ValueError:
    print("Invalid input. Please enter exactly four numbers separated by space.")