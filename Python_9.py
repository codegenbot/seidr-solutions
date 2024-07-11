from typing import List
import heapq


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_heap = []

    for num in numbers:
        heapq.heappush(max_heap, -num)

        if len(max_heap) > 1:
            result.append(-heapq.heappop(max_heap))

    while max_heap:
        result.append(-heapq.heappop(max_heap))

    return result