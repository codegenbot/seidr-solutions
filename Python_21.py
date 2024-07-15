try:
    numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))
    result = normalize_numbers(numbers)
    print(result)
except (ValueError, ZeroDivisionError):
    print("Invalid input. Please enter valid numbers separated by spaces.")