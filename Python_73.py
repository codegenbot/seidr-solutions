```
def smallest_change(arr):
    n = len(arr)
    forward = [arr[i] for i in range(n//2)]
    backward = [arr[n-1-i] for i in range(n//2+1, n)]
    count = sum([1 if a != b else 0 for a, b in zip(forward + backward[1:], backward[:-1])])
    return count