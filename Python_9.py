from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers

input_numbers = [1, 3, 5, 2, 7, 4]
output = rolling_max(input_numbers)
print(output)