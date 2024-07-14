def leaders(arr):
    leaders_list = []
    max_right = arr[-1]
    for i in range(len(arr) - 1, -2, -1):
        if arr[i] >= max_right:
            leaders_list.append(arr[i])
            max_right = arr[i]
    return list(reversed(leaders_list))