from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for num in numbers:
        if not isinstance(num, (int, float)):
            raise ValueError("Non-numeric input detected")
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) <= threshold:
            return True
    return False