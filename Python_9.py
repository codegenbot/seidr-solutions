from typing import List
import sys

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

input_numbers = list(map(int, sys.argv[1:]))
output = rolling_max(input_numbers)
print(output)