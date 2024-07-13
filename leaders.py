def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]
    max_so_far = arr[n - 1]
    for i in range(n-2, -1, -1):
        if arr[i] >= max_so_far:
            leaders.append(arr[i])
            max_so_far = arr[i]
    return list(reversed(leaders))