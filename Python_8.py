```
from typing import List, Tuple


def sum_product(numbers: List[str]) -> Tuple[int, int]:
    try:
        if not numbers:
            return 0, 1
        numbers = [int(num) for num in numbers]
        return sum(numbers), eval("*".join(map(str, numbers)))
    except ValueError:
        return None