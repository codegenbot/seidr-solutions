import sys
from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    sorted_numbers = sorted(numbers)
    for i in range(len(sorted_numbers) - 1):
        if sorted_numbers[i+1] - sorted_numbers[i] < threshold:
            return True
    return False

numbers_input = list(map(float, sys.stdin.readline().split()))
threshold_input = float(sys.stdin.readline())

result = has_close_elements(numbers_input, threshold_input)
print(result)