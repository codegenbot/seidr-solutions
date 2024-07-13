```
def leaders(arr):
    n = len(arr)
    max_seen_so_far = arr[n - 1]
    leaders = [max_seen_so_far]
    for i in range(n - 2, -1, -1):
        if arr[i] >= max_seen_so_far:
            max_seen_so_far = arr[i]
            leaders.append(max_seen_so_far)
    return leaders[::-1]