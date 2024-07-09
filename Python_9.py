from collections import deque

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_values = deque()
    
    for num in numbers:
        while max_values and max_values[-1] < num:
            max_values.pop()
        max_values.append(num)
        result.append(max_values[0])
    
    return result