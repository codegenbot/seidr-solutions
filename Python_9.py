from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

print(rolling_max([3, 1, 4, 1, 5, 9, 2, 6, 5]))