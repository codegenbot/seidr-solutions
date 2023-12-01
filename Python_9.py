'''python
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    rolling_max_list = []
    current_max = float('-inf')
    for num in numbers:
        current_max = max(current_max, num)
        rolling_max_list.append(current_max)
    return rolling_max_list
'''