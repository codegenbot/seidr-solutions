from typing import List
import sys

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers

numbers = []
for line in sys.stdin:
    numbers.append(int(line))

result = rolling_max(numbers)
print(result)