```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = [0] * len(numbers)
    result = [max(0) for _ in range(len(numbers))]
    
    current_sum = max_sum[0] = numbers[0]
    result[0] = numbers[0]
    
    for i in range(1, len(numbers)):
        current_sum = max(sum([numbers[j] for j in range(i - (i < 0) + 1, i+1)]), numbers[i])
        max_sum[i] = current_sum
        result[i] = max(max_sum[:i+1])
    
    return result