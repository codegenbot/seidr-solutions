from typing import List, Tuple


def find_closed_elements(numbers: List[float]) -> Tuple[float, float]:
    if not all(isinstance(n, float) for n in numbers):
        return (0.0, 0.0)
    if len(numbers) <= 1:
        return (0.0, 0.0)
    min_diff = float("inf")
    min_range = (float("inf"), -float("inf"))
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = numbers[j] - numbers[i]
            if -1 <= diff <= 1:
                if abs(diff) < min_diff:
                    min_diff = abs(diff)
                    min_range = (numbers[i], numbers[j])
    return min_range