from collections import deque


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_vals = deque()
    
    for num in numbers:
        while max_vals and num > max_vals[-1]:
            max_vals.pop()
        max_vals.append(num)
        result.append(max_vals[0])
    
    return result