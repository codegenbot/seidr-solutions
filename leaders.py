def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if max(arr[i:]) > arr[i]:
            leaders_list.insert(0, arr[i])

    return leaders_list