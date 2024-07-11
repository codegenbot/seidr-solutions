```
def smallest_change(arr):
    n = len(arr)
    forward = [0] * (n + 1)
    backward = [0] * (n + 1)

    for i in range(n):
        if i == 0:
            forward[i] = arr[0]
        else:
            forward[i] = forward[i - 1] + abs(arr[i] - forward[i - 1])
        if i == n - 1:
            backward[i] = arr[n - 1]
        else:
            backward[i] = backward[i + 1] + abs(arr[i] - backward[i + 1])

    return min(forward[i] + backward[n - 1 - i] for i in range(n))