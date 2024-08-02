from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_so_far = float("-inf")
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result


# Read input from the user
numbers = list(map(int, input().split()))

# Call the rolling_max function with the user input
output = rolling_max(numbers)
print(output)