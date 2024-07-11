from typing import List

def has_close_elements(numbers: list[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) <= threshold:
            return True
    return False