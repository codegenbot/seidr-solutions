```
def smallest_change(arr):
    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    i = j = 0
    count = 0
    while i < n and j < n:
        if forward[i] != backward[j]:
            count += 1
            if forward[i] == backward[n - j - 1]:
                forward[i], backward[n - j - 1] = backward[n - j - 1], forward[i]
            else:
                forward[i] = backward[n - j - 1]
        i += 1
        j += 1
    return count