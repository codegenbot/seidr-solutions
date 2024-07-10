def smallest_change(arr):
    heap = [-x for x in arr]
    heapq.heapify(heap)
    total = 0
    while heap:
        coin = -heapq.heappop(heap)
        if coin > 1:  
            total += coin
            heapq.heappush(heap, -(coin-1))
        else:
            total += coin
    return total