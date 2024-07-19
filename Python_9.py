from collections import deque

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    dq = deque()
    for i, num in enumerate(numbers):
        while dq and numbers[dq[-1]] < num:
            dq.pop()
        dq.append(i)
        if dq[0] == i - 1 - len(dq):
            dq.popleft()
        result.append(numbers[dq[0]])
    return result