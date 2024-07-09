from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float('-inf')
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Read input and convert to list of integers
numbers = list(map(int, input().split()))

# Call rolling_max function with input list
output = rolling_max(numbers)

# Print the output
print(output)