from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 1 if not numbers else (lambda x: x if x else 1)(eval('*'.join(map(str, numbers))))