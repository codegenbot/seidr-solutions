from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float("-inf")
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers


input_numbers = [4, 5, 2, 8, 1]  # Replace with your desired input list
result = rolling_max(input_numbers)
print(result)