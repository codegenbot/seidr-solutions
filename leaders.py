def leaders(arr):
    leader_arr = []
    max_right = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right:
            leader_arr.append(arr[i])
            max_right = arr[i]
    return reversed(leader_arr)