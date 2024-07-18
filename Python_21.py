from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    assert isinstance(numbers, list) and all(isinstance(num, float) for num in numbers)
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]