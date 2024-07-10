```Python
from typing import List

def rolling_max(numbers: List[int], n: int) -> List[int]:
    result = []
    for i in range(len(numbers) - n + 1):
        max_num = max(numbers[i:i+n])
        result.append(max_num)
    return result