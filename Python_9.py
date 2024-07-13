from collections import deque
from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    window = deque()
    
    for i, num in enumerate(numbers):
        while window and numbers[window[-1]] <= num:
            window.pop()
        
        window.append(i)
        
        if window[0] == i - len(numbers):
            window.popleft()
        
        max_numbers.append(numbers[window[0]])
    
    return max_numbers