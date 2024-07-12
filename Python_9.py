from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Test the function with input list provided
numbers = [1, 3, 2, 5, 4]
print(rolling_max(numbers))