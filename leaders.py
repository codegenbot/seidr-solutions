def leaders(arr):
    n = len(arr)
    leaders_arr = [arr[n - 1]]
    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            leaders_arr.insert(0, arr[i])
    return leaders_arr