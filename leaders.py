def leaders(arr):
    leaders = []
    right_max = arr[-1]
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= right_max:
            leaders.append(arr[i])
            right_max = arr[i]
    return list(reversed(leaders))