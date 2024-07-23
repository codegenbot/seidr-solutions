def smallest_change(arr):
    n = len(arr)
    forward = [0] * (n + 1)
    backward = [0] * (n + 1)
    for i in range(1, n + 1):
        if arr[i - 1] == 0:
            forward[i] = forward[i - 1]
            backward[i] = backward[i - 1]
        else:
            forward[i] = min(forward[i - 1], backward[n - i]) + 1
            backward[n - i] = min(backward[n - i], forward[i - 1]) + 1
    return forward[n] - 1 if arr[0] == 0 else forward[n]