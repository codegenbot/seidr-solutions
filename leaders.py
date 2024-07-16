def leaders(arr):
    leaders = [arr[0]]
    max_right = arr[0]
    for x in arr[1:]:
        if x >= max_right:
            leaders.append(x)
        else:
            max_right = x
    return leaders