def leaders(arr):
    leader = [arr[-1]]
    max_right = arr[-1]
    for x in arr[:-1][::-1]:
        if x >= max_right:
            leader.append(x)
            max_right = x
    return list(reversed(leader))