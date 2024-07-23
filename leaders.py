```
def leaders(arr):
    n = len(arr)
    max_seen = arr[n-1]
    leaders_list = [max_seen]

    for i in range(n-2, -1, -1):
        if arr[i] >= max_seen:
            max_seen = arr[i]
            leaders_list.append(max_seen)

    return list(reversed(leaders_list))