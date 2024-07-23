def leaders(arr):
    n = len(arr)
    max_right = arr[n-1]
    leaders_list = [max_right]
    for i in range(n-2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders_list.append(max_right)
    return leaders_list