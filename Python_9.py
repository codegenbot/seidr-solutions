from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []

    max_num = float("-inf")
    rolling_max_list = []
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list

numbers = [int(input()) for _ in range(len(numbers))]
result = rolling_max(numbers)
print(*result)