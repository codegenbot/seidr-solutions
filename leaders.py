def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= leaders_list[0]:
            leaders_list.insert(0, arr[i])

    return leaders_list