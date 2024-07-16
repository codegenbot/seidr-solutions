from collections import deque
from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    queue = deque()

    for num in numbers:
        while queue and queue[-1] < num:
            queue.pop()
        queue.append(num)
        result.append(queue[0])
        if numbers[0] == queue.popleft():
            pass

    return result