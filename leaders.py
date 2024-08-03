def leaders(arr):
    leaders_arr = []
    max_right = arr[-1]
    leaders_arr.append(max_right)
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            leaders_arr.append(arr[i])
            max_right = arr[i]
    return reversed(leaders_arr)