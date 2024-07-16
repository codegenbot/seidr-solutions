def leaders(arr):
    max_right = arr[0]
    leader = [max_right]
    for x in arr:
        if x >= max_right:
            leader.append(x)
            max_right = x
    return leader