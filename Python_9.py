from collections import deque
from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_deque = deque()

    for num in numbers:
        while max_deque and max_deque[-1] < num:
            max_deque.pop()
        max_deque.append(num)
        result.append(max_deque[0])

    return result


# Read input as list of integers
numbers = list(map(int, input().split()))

# Call the function with the input and print the result
print(rolling_max(numbers))