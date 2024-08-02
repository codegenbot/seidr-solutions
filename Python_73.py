```
def smallest_change(arr):
    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    count = 0
    for i in range(n // 2):
        if forward[i] != backward[n - i - 1]:
            min_val = min(forward[i], backward[n - i - 1])
            max_val = max(forward[i], backward[n - i - 1])
            while forward[i] > min_val or forward[i] < max_val:
                forward[i] = min_val
                count += 1
    return count