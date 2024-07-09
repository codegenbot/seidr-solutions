def leaders(arr):
    leaders = [arr[-1]]
    for i in range(len(arr)-1, -1, -1):
        leaders.append(arr[i])
    return list(reversed(leaders))