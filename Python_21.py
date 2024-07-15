def normalize_numbers(numbers):
    if any(num <= 0 for num in numbers):
        return [0]
    min_num = min(numbers)
    return [num // min_num for num in numbers if num % min_num == 0]

try:
    numbers = list(map(int, input().split()))
    result = normalize_numbers(numbers)
    print(result)
except (ValueError, ZeroDivisionError):
    print("Invalid input. Please enter valid numbers separated by spaces.")