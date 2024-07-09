import sys
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in set(numbers) if numbers.count(num) == 1]

numbers = list(map(int, sys.stdin.readline().split()))
print(remove_duplicates(numbers))   