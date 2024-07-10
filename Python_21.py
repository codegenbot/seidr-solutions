```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[str]:
    min_val = min(numbers)
    max_val = max(numbers)

    if len(numbers) == 0:
        return []

    if (max_val - min_val) == 0:
        for num in numbers:
            if num != 0:
                return ["inf"] + [str(num / i) if i != 0 else "0" for i, num in enumerate(numbers)]
        return ["0"] * len(numbers)

    result = [(x - min_val) / (max_val - min_val) for x in numbers]
    return [str(i) if isinstance(i, float) and i.is_integer() else str(i) for i in result]