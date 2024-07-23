def leaders(arr):
    n = len(arr)
    leaders_list = []

    for i in range(n-1, -1, -1):
        if not any(x >= arr[i] for x in arr[i+1:]):
            leaders_list.append(arr[i])

    return leaders_list