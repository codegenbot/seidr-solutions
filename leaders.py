def leaders(arr):
    leaders_list = []
    max_right = arr[-1]
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right:
            leaders_list.append(max_right)
            max_right = arr[i]
        else:
            leaders_list.append(max_right)
    return list(reversed(leaders_list))