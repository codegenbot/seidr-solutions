def leaders(arr):
    n = len(arr)
    leaders = []
    max_right = arr[n-1]

    for i in range(n-1, -1, -1):
        if max_right <= arr[i]:
            leaders.append(max_right)
            max_right = arr[i]
        else:
            leaders.append(max_right)

    return leaders[::-1]