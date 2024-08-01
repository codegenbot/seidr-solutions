from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float('-inf')
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Input should be provided as a list, for example:
input_numbers = [1, 5, 3, 8, 4]
output = rolling_max(input_numbers)
print(output)