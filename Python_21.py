from typing import List

try:
    numbers = list(map(float, input("Enter numbers separated by spaces: ").strip().split()))
    if len(numbers) < 2:
        raise ValueError("Please enter at least two numbers")

    min_num = min(numbers)
    max_num = max(numbers)
    rescaled_numbers = [(x - min_num) / (max_num - min_num) for x in numbers]
    print(rescaled_numbers)
except ValueError as e:
    print(e)