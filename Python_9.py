from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_so_far = float('-inf')
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result

# Input: take a list of integers from the user
numbers = list(map(int, input("Enter a list of integers separated by space: ").split())

# Call the function with the user input
output = rolling_max(numbers)
print(output)