def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    deque = []
    
    for i, num in enumerate(numbers):
        while deque and numbers[deque[-1]] < num:
            deque.pop()
        deque.append(i)
        
        if i - deque[0] >= 4:
            deque.pop(0)
        
        result.append(numbers[deque[0]])
    
    return result