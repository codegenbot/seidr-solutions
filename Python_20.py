from typing import List, Tuple
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(closest_pair[1] - closest_pair[0])

    for i in range(len(numbers) - 1):
        diff = abs(numbers[i + 1] - numbers[i])
        if diff < min_diff:
            closest_pair = (numbers[i], numbers[i + 1])
            min_diff = diff

    return closest_pair