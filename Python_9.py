from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Read input from the user
numbers = list(map(int, input().split()))

# Call the rolling_max function with the input list
output = rolling_max(numbers)

# Print the output
print(output)