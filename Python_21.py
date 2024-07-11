from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    try:
        if len(numbers) < 2:
            return []
        min_num = min(numbers)
        max_num = max(numbers)
        return [
            (x - min_num) / (max_num - min_num)
            for x in numbers
            if max_num - min_num != 0 and isinstance(x, float)
        ]
    except ValueError:
        return []