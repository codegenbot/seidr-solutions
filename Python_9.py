from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

numbers = [1, 3, 5, 2, 7, 4, 8]
print(rolling_max(numbers))