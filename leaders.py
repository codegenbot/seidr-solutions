def leaders(arr):
    n = len(arr)
    leaders_list = []
    max_right = arr[n-1]
    leaders_list.append(max_right)
    for i in range(n-2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders_list.insert(0, max_right)
    return leaders_list