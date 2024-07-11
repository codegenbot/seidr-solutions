from typing import List, Tuple


def find_closed_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) <= 1:
        return ()
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs((numbers[i + 1] - numbers[i])) < 0.000001:
            return (numbers[i], numbers[i + 1])
    return ()