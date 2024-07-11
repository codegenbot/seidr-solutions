from typing import List, Tuple


def find_closed_elements(numbers: list[float]) -> Tuple[float, float]:
    if len(numbers) <= 1:
        return (0, 0)
    min_diff = float("inf")
    min_range = ((float("inf"), -float("inf")))
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = numbers[j] - numbers[i]
            if -1 <= diff <= 1:
                if abs(diff) < min_diff:
                    min_diff = abs(diff)
                    min_range = ((min(numbers[i], numbers[j])), (max(numbers[i], numbers[j])))
    return min_range