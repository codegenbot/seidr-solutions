def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

try:
    numbers = list(map(int, input().split()))
    result = normalize_numbers(numbers)
    print(result)
except:
    print("Invalid input. Please enter valid numbers separated by spaces.")