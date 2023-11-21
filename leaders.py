def find_leaders(arr):
    leaders = []
    n = len(arr)
    max_right = arr[n - 1]

    for i in range(n - 2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            if arr[i] not in leaders:
                leaders.append(arr[i])

    leaders.append(max_right)
    return leaders[::-1]