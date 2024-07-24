def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            leaders_list.insert(0, arr[i])
        elif leaders_list[0] <= arr[i]:
            leaders_list.pop(0)

    return leaders_list