```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    numbers = [int(x) for x in input("Enter numbers separated by spaces: ").split()]
    result = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return result