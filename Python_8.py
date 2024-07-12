Here is the completed code:

```
from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    result_sum = 0
    product = 1
    for num in numbers:
        result_sum += num
        product *= num
    return (result_sum, product)