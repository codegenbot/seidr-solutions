from typing import List
import sys

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

numbers = list(map(float, sys.argv[1:-1]))
threshold = float(sys.argv[-1])

result = has_close_elements(numbers, threshold)

print(result)