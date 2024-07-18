from typing import List
from collections import deque


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    queue = deque()

    for i, num in enumerate(numbers):
        while queue and numbers[queue[-1]] <= num:
            queue.pop()
        queue.append(i)

        if queue[0] == i - len(numbers) + 1:
            queue.popleft()

        result.append(numbers[queue[0]])

    return result