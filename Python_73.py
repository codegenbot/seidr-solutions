def smallest_change(arr):
    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    diff = [abs(x - y) for x, y in zip(forward, backward)]
    return sum(diff) // 2