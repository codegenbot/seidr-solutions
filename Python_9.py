from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Test the rolling_max function with a list of integers
numbers = [10, 5, 7, 8, 3]
print(rolling_max(numbers))