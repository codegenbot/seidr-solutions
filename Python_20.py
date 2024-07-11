```
from typing import List, Tuple


def find_closed_elements(numbers: list[float]) -> Tuple[float, float]:
    if len(numbers) <= 1:
        return (0.0, 0.0)
    min_diff = float("inf")
    min_range = (float("inf"), -float("inf"))
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            num1, num2 = numbers[i], numbers[j]
            if abs(num1 - num2) <= 1:
                if abs(num1 - num2) < min_diff:
                    min_diff = abs(num1 - num2)
                    min_range = (num1, num2)
    return min_range