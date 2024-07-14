def leaders(arr):
    leaders_list = [arr[-1]]  
    max_left = arr[0]

    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_left:
            leaders_list.insert(0, arr[i])
            max_left = arr[i]

    return leaders_list