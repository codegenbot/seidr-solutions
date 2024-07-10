```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    numeric_numbers = [x for x in numbers if isinstance(x, (int, float))]
    min_val = min(numeric_numbers)
    max_val = max(numeric_numbers)

    result = []
    for num in set(numeric_numbers):
        count = numeric_numbers.count(num)
        result.extend([(num - min_val) / (max_val - min_val)] * count)

    return result