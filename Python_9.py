from collections import deque

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    queue = deque()
    for num in numbers:
        while queue and queue[-1] < num:
            queue.pop()
        queue.append(num)
        result.append(queue[0])
        if queue[0] == numbers[result.index(queue[0]) - 1]:
            queue.popleft()
    return result