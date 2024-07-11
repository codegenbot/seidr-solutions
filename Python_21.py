```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    min_val = min(x for x in numbers if isinstance(x, (int, float)))
    max_val = max(x for x in numbers if isinstance(x, (int, float)))

    if min_val == max_val:
        return [0.0] * len(numbers)

    seen = set()
    result = []
    for x in numbers:
        if isinstance(x, (int, float)):
            val = (x - min_val) / (max_val - min_val)
            if val not in seen:
                result.append(val)
                seen.add(val)

    return result