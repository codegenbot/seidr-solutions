def leaders(arr):
    leaders = [arr[-1]]
    max_right = arr[-1]
    for i in reversed(range(len(arr)-1)):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    return list(reversed(leaders))