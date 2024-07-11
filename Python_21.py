from typing import List


def rescale_to_unit(numbers: List[float]) -> str:
    try:
        for x in numbers:
            if not isinstance(x, float):
                raise TypeError
        min_val = min(numbers)
        max_val = max(numbers)
        return '[{' + ', '.join(str((x - min_val) / (max_val - min_val)) for x in numbers) + ']}'
    except TypeError:
        return "Error: All elements must be floats."