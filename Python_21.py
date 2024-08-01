from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not all(isinstance(x, (int, float)) for x in numbers):
        return ["Invalid input"]
    elif len(set(map(abs, numbers))) == 1:
        return ["All values are zero. Please provide non-zero values."]

    min_value = min(numbers)
    max_value = max(numbers)

    if min_value == max_value:
        return ["All values are equal. Please provide distinct values."]

    return [(x - min_value) / (max_value - min_value) for x in numbers]