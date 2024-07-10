from collections import deque
from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    window = deque()

    for num in numbers:
        while window and window[-1] < num:
            window.pop()
        window.append(num)
        max_numbers.append(window[0])

        if numbers.index(num) >= 3:
            window.popleft()

    return max_numbers