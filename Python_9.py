from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float("-inf")
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers


input_numbers = [1, 3, 5, 2, 4, 7, 1]
result = rolling_max(input_numbers)
print(result)