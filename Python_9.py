from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_so_far = float('-inf')
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result

# Example of calling the function with a list of integers
numbers = [3, 1, 5, 2, 7, 8]
output = rolling_max(numbers)
print(output)