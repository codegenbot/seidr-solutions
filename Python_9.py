from collections import deque


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    q = deque()

    for num in numbers:
        while q and q[-1] < num:
            q.pop()
        q.append(num)
        result.append(q[0])

        if q[0] == numbers[0]:
            q.popleft()

    return result