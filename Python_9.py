from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    rolling_max_list = []
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list

# Read input from the user
numbers = list(map(int, input().split()))

# Call the rolling_max function with the input
output = rolling_max(numbers)

# Print the output
print(output)