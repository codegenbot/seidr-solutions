def smallest_change(arr):
    n = len(arr)
    forward = [0] * (n + 1)
    backward = [0] * (n + 1)

    for i in range(n):
        if i == 0:
            forward[i] = arr[i]
        else:
            forward[i] = forward[i - 1] + (arr[i] != arr[i - 1])

        if i == n - 1:
            backward[i] = arr[i]
        else:
            backward[i] = backward[i + 1] + (arr[i] != arr[i + 1])

    total_changes = forward[n - 1]

    for i in range(n):
        if arr[i] != arr[n - i - 1]:
            total_changes = min(total_changes, forward[i] + backward[n - i - 1])
    return total_changes