```
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(current, previous) for current, previous in zip([num for num in numbers], [0] + numbers[:-1])]
    
    return result

print(rolling_max([1, 2, 3, 4, 5]))