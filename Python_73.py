def smallest_change(arr):
    n = len(arr)
    forward = arr.copy()
    backward = arr.copy()[::-1]

    changes = 0
    for i in range(n):
        if forward[i] != backward[n - i - 1]:
            changes += 1

    return changes