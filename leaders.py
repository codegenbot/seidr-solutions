def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n-1, -1, -1):
        leaders_list.insert(0, arr[i] if arr[i] >= max(arr[i+1:]) else None)

    return [x for x in leaders_list if x is not None]