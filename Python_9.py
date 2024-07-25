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

numbers = list(map(int, input().split()))
print(rolling_max(numbers))