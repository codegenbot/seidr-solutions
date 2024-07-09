from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Read input from user
numbers = list(map(int, input().split()))

# Call the function with user input
output = rolling_max(numbers)
print(output)