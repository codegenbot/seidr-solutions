```
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    numbers = list(map(int, input("Enter numbers (space-separated): ").split()))
    result = [max(numbers[:i+1]) if i == 0 else max(numbers[:i+1]) for i in range(len(numbers))]
    return result

print(rolling_max([]))