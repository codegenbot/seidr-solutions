from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

# Receive user input
numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").split())

# Call the function with user input
print(rolling_max(numbers))