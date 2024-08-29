def leaders(arr):
    leaders = []
    max_right_now = arr[-1]
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right_now:
            leaders.append(arr[i])
            max_right_now = arr[i]
    return reversed(leaders)