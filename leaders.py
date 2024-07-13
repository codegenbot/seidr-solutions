def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[n - 1]:
            leaders_list.insert(0, arr[i])
            n = i
            break

    return leaders_list