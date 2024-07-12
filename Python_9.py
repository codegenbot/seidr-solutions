from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(i) for i in zip(*[[(x,) for x in numbers[i:]) for i in range(len(numbers))])]
    return result