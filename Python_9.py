from typing import List, Tuple

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float("-inf")
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers

input_numbers = [4, 2, 6, 8, 5, 1]
output = rolling_max(input_numbers)
print(output)