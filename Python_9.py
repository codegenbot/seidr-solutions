from typing import List
from typing import Union

def rolling_max(numbers: List[Union[int]]) -> list[int]:
    result = []
    max_num = numbers[0]
    for num in numbers:
        if num > max_num:
            max_num = num
        result.append(max_num)
    return result