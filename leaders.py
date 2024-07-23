def leaders(arr):
    n = len(arr)
    leaders_list = []

    for i in range(n-1, -1, -1):
        leaders_list.append(next(x for x in arr[i:] if x >= arr[i]))

    return leaders_list