from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float('-inf')
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

numbers = [5, 2, 7, 1, 9, 3]
output = rolling_max(numbers)
print(output)