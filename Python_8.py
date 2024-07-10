Here is the completed code:

```
from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    total_sum = sum(numbers)
    product = 1
    for number in numbers:
        product *= number
    return (total_sum, product)