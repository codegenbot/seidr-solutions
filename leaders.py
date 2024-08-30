def leaders(arr):
    n = len(arr)
    leaders_array = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            leaders_array.insert(0, arr[i])

    return leaders_array