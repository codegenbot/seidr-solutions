def smallest_change(arr):
    n = len(arr)
    forward = [0] * n
    backward = [0] * n
    forward[0] = arr[0]
    for i in range(1, n):
        forward[i] = min(forward[i - 1], abs(arr[i] - arr[i - 1])) + 1
    backward[n - 1] = arr[n - 1]
    for i in range(n - 2, -1, -1):
        backward[i] = min(backward[i + 1], abs(arr[i] - arr[i + 1])) + 1
    return min(forward[-1], backward[0])