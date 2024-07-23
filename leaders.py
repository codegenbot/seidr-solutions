```
def leaders(arr):
    n = len(arr)
    max_seen_so_far = arr[n-1]
    leaders_list = [max_seen_so_far]

    for i in range(n-2, -1, -1):
        if arr[i] >= max_seen_so_far:
            max_seen_so_far = arr[i]
            leaders_list.insert(0, max_seen_so_far)

    return leaders_list