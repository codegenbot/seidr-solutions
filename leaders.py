def leaders(arr):
    n = len(arr)
    leader_index = n - 1
    leaders_list = [arr[leader_index]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= leaders_list[0]:
            leaders_list.insert(0, arr[i])
            leader_index = i

    return leaders_list