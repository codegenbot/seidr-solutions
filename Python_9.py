from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    rolling_max_list = []
    max_num = float('-inf')
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list

# Read input from the user
numbers = input().split()
numbers = [int(num) for num in numbers]

# Call the function with the input
result = rolling_max(numbers)

# Print the result
print(result)