def smallest_change(arr):
    n = len(arr)
    forward = [0] * n
    backward = [0] * n

    for i in range(n):
        if i == 0:
            forward[i] = arr[0]
        else:
            forward[i] = min(forward[i - 1], abs(arr[i] - forward[i - 1]))

    for i in range(n - 1, -1, -1):
        if i == n - 1:
            backward[i] = arr[n - 1]
        else:
            backward[i] = min(backward[i + 1], abs(arr[i] - backward[i + 1]))

    return sum(min(forward[i], backward[i]) for i in range(n))