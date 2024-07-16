from collections import deque
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    rolling_max_list = []
    max_queue = deque()

    for i, num in enumerate(numbers):
        while max_queue and numbers[max_queue[-1]] < num:
            max_queue.pop()
        max_queue.append(i)

        if max_queue[0] == i - len(numbers):
            max_queue.popleft()

        rolling_max_list.append(numbers[max_queue[0]])

    return rolling_max_list