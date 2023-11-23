from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    float_numbers = [float(num) for num in numbers]

    float_numbers.sort()
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(float_numbers) - 1):
        diff = float_numbers[i + 1] - float_numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (float_numbers[i], float_numbers[i + 1])

    return closest_pair