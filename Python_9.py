from collections import deque

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    q = deque()
    for i, num in enumerate(numbers):
        while q and numbers[q[-1]] < num:
            q.pop()
        q.append(i)
        while q[0] <= i - 2:
            q.popleft()
        result.append(numbers[q[0]])
    return result