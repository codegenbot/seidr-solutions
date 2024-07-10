from collections import deque
from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    dq = deque()
    result = []
    for i, num in enumerate(numbers):
        while dq and numbers[dq[-1]] < num:
            dq.pop()
        dq.append(i)
        if dq[0] == i - len(dq):
            dq.popleft()
        result.append(numbers[dq[0]])
    return result