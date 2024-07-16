from collections import deque

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_values = deque()
    
    for i, num in enumerate(numbers):
        while max_values and numbers[max_values[-1]] < num:
            max_values.pop()
        max_values.append(i)
        
        if max_values[0] == i - len(max_values):
            max_values.popleft()
        
        result.append(numbers[max_values[0]])
    
    return result