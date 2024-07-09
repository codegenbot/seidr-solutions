from collections import deque


def rolling_max(numbers: List[int]) -> List[int]:
    max_nums = []
    max_queue = deque()
    
    for num in numbers:
        while max_queue and max_queue[-1] < num:
            max_queue.pop()
        max_queue.append(num)
        max_nums.append(max_queue[0])
    
    return max_nums