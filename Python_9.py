from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    rolling_max_list = []
    for i in range(len(numbers)):
        current_max = max(numbers[:i+1])
        rolling_max_list.append(current_max)
    return rolling_max_list