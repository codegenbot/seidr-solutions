from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    return any(abs(num1 - num2) < threshold for i, num1 in enumerate(numbers) for num2 in numbers[i+1:])