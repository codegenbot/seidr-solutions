from typing import List, Union
def rolling_max(numbers: List[Union[int, float]]) -> List[Union[int, float]]:
    rolling_max_list = []
    max_num = float('-inf')
    for num in numbers:
        if isinstance(num, (int, float)):
            max_num = max(max_num, num)
            rolling_max_list.append(max_num)
    return rolling_max_list
