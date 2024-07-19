try:
    numbers = list(map(float, input("Enter exactly four numbers separated by space: ").split()))
    if len(numbers) != 4:
        raise ValueError
    print(sum(numbers))
except ValueError:
    print("Invalid input. Please enter exactly four numbers separated by space.")