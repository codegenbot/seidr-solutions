import sys
from typing import List

numbers = list(map(float, sys.stdin.readline().strip().split()))
threshold = float(sys.stdin.readline().strip())

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

print(has_close_elements(numbers, threshold))