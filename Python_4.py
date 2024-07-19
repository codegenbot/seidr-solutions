try:
    user_input = input("Enter four numbers separated by space: ").strip()
    numbers = map(float, user_input.split())
    result = sum(numbers)
    print(result)
except ValueError:
    print("Invalid input. Please enter exactly four numbers separated by space.")