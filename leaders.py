def leaders(arr):
    leaders_list = []
    max_right_now = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right_now:
            leaders_list.append(arr[i])
            max_right_now = arr[i]
    return leaders_list