from typing import List, Tuple

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Input format validation
try:
    numbers = list(map(int, input().split()))
except ValueError:
    print("Invalid input format. Please provide a list of integers separated by spaces.")
else:
    output = rolling_max(numbers)
    print(output)