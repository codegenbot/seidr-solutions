from typing import List, Tuple

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float("-inf")

    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)

    return max_numbers

# Input processing
input_numbers = [int(x) for x in input().split()]
result = rolling_max(input_numbers)
print(result)