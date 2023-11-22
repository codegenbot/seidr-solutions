from typing import List, Tuple


def find_closest_elements(numbers: List[float], target: float) -> Tuple[float, float]:
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        diff = abs(target - numbers[i])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair


numbers = [1.5, 2.7, 3.9, 4.2, 5.1]
target = 4.0
result = find_closest_elements(numbers, target)
print(result)