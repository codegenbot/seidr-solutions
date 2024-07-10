from collections import deque

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    rolling_max_queue = deque()
    
    for num in numbers:
        while rolling_max_queue and rolling_max_queue[-1] < num:
            rolling_max_queue.pop()
        rolling_max_queue.append(num)
        result.append(rolling_max_queue[0])
        if numbers[0] == rolling_max_queue[0]:
            rolling_max_queue.popleft()
    
    return result