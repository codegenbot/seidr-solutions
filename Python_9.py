from collections import deque
from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    window = deque()

    for num in numbers:
        while window and window[-1] < num:
            window.pop()
        window.append(num)
        result.append(window[0])
        if numbers[0] == window.popleft():
            pass

    return result