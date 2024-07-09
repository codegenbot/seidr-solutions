from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    assert all(isinstance(num, int) for num in numbers), "Input should be a list of integers"
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result