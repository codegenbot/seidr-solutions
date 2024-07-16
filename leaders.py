def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    max_right = arr[n - 1]
    
    for i in range(n - 2, -1, -1):
        if arr[i] >= max_right:
            leaders_list.append(arr[i])
            max_right = arr[i]

    return leaders_list[::-1]