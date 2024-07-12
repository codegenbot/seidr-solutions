from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Call the function with input list
input_numbers = [1, 3, 5, 2, 4]
output = rolling_max(input_numbers)
print(output)