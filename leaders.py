def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= max(arr[i + 1 :]):
            leaders_list.insert(0, arr[i])

    return leaders_list