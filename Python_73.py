def smallest_change(arr):
    n = len(arr)
    forward = [0] * n
    backward = [0] * n
    forward[0] = arr[0]
    for i in range(1, n):
        if arr[i] == forward[i - 1]:
            forward[i] = forward[i - 1]
        else:
            forward[i] = forward[i - 1] + 1

    backward[n - 1] = arr[n - 1]
    for i in range(n - 2, -1, -1):
        if arr[i] == backward[i + 1]:
            backward[i] = backward[i + 1]
        else:
            backward[i] = backward[i + 1] + 1

    return min(forward[-1], backward[0])