```
from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    if not isinstance(threshold, (int, float)) or not isinstance(numbers, list):
        return False  

    if any(not isinstance(num, (int, float)) for num in numbers):
        return False  

    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) <= threshold:
            return True
    return False