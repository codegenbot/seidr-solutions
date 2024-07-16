from collections import deque


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    sliding_window = deque()
    
    for i, num in enumerate(numbers):
        while sliding_window and numbers[sliding_window[-1]] < num:
            sliding_window.pop()
        
        sliding_window.append(i)
        
        if sliding_window[0] == i - len(numbers):
            sliding_window.popleft()
        
        result.append(numbers[sliding_window[0]])
    
    return result