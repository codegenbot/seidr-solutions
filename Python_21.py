from typing import List


def rescale_to_unit(numbers: list[float]) -> list[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]