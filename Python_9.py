from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result


# Receive input from the user as a list of integers
numbers = list(map(int, input().split()))

# Call the rolling_max function with the input
output = rolling_max(numbers)
print(output)