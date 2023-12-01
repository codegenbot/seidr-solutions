from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    rolling_max_list = []
    max_num = float('-inf')
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list

# Prompt the user for input
numbers = [int(x) for x in input("Enter the numbers: ").split()]

# Call the rolling_max function with the provided input
result = rolling_max(numbers)

# Print the result
print("Rolling max list:", result)