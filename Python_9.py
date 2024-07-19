from collections import deque
from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_queue = deque()
    for i, num in enumerate(numbers):
        while max_queue and numbers[max_queue[-1]] < num:
            max_queue.pop()
        max_queue.append(i)
        if max_queue[0] == i - len(numbers):
            max_queue.popleft()
        result.append(numbers[max_queue[0]])
    return result