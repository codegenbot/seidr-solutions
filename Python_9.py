from collections import deque
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    q = deque()

    for i, num in enumerate(numbers):
        while q and numbers[q[-1]] <= num:
            q.pop()

        q.append(i)

        if q[0] == i - len(numbers):
            q.popleft()

        result.append(numbers[q[0]])

    return result