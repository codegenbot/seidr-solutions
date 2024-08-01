from typing import List
import sys

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float('-inf')
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Input handling
data = sys.stdin.readline().rstrip()
numbers = list(map(int, data.split()))

# Output
print(rolling_max(numbers))