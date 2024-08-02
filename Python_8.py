from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    if len(numbers) == 1 and numbers[0] == 0:
        return 0, 0
    return sum(numbers), 1 if 0 in numbers else eval("*".join(map(str, numbers)))