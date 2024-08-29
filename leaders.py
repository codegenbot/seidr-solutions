def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        leaders_list.insert(0, arr[i] if max(arr[i:]) > arr[i] else arr[0])

    return leaders_list