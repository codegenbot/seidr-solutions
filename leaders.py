def leaders(arr):
    leaders = [arr[-1]]
    max_right = arr[-1]
    max_left = arr[-1]

    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]

    for i in range(0, len(arr)):
        if arr[i] >= max_left:
            leaders.insert(0, arr[i])
            max_left = arr[i]

    return leaders