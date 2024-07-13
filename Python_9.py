from collections import deque

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    queue = deque()
    
    for i in range(len(numbers)):
        while queue and numbers[i] > queue[-1]:
            queue.pop()
        queue.append(numbers[i])
        
        if i >= 2:
            result.append(queue[0])
            if numbers[i - 2] == queue[0]:
                queue.popleft()
    
    return result