from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if not numbers or 0 in numbers else eval("*".join(map(str, numbers))),
    )