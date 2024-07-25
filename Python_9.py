from collections import deque


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    dq = deque()
    for i in range(len(numbers)):
        while dq and numbers[i] >= numbers[dq[-1]]:
            dq.pop()
        dq.append(i)
        if dq[0] == i - 2:
            dq.popleft()
        result.append(numbers[dq[0]])
    return result