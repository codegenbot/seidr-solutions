def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        leaders_list.append(arr[i] if arr[i] >= arr[i + 1] else None)

    return [x for x in reversed(leaders_list) if x is not None]