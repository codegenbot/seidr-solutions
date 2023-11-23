import sys
from typing import List

numbers = [float(x) for x in sys.stdin.readline().split()]

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

print(has_close_elements(numbers, 1.0))