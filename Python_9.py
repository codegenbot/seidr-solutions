from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Example usage
numbers = [4, 5, 3, 7, 1, 9, 2]
print(rolling_max(numbers))