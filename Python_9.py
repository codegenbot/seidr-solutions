from collections import deque
from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    q = deque()
    result = []
    for num in numbers:
        while q and q[-1] < num:
            q.pop()
        q.append(num)
        result.append(q[0])
        if numbers[0] == q.popleft():
            q.popleft()
    return result