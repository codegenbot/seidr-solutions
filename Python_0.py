```
from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if numbers[i + 1] - numbers[i] <= threshold:
            return False
    return True

numbers = [1.0, 1.1, 2.2]
threshold = 0.5
print(has_close_elements(numbers, threshold))