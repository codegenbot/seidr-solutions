from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers or len(numbers) == 1:
        return numbers
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]