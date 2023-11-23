from typing import List
import sys


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False


numbers = [float(num) for num in sys.argv[1].strip().split()]
threshold = float(sys.argv[2])
print(has_close_elements(numbers, threshold))