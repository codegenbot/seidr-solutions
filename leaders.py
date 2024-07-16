def leaders(arr):
    n = len(arr)
    max_left = arr[0]
    leaders = [max_left]

    for i in range(1, n):
        if arr[i] >= max_left:
            leaders.insert(0, arr[i])
            max_left = arr[i]

    max_right = arr[n - 1]
    leaders.append(max_right)

    for i in range(n - 2, -1, -1):
        if arr[i] < max_right:
            leaders.append(arr[i])
            max_right = arr[i]

    return leaders