from typing import List, int

def rolling_max(numbers: List[int]) -> list:
    result = []
    max_num = numbers[0]
    for num in numbers:
        if num > max_num:
            max_num = num
        result.append(max_num)
    return result