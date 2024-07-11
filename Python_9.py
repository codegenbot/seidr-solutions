from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers or not all(isinstance(num, int) for num in numbers):
        return "Invalid input. Please provide a list of integers."

    max_num = float("-inf")
    rolling_max_list = []
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list