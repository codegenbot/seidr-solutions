def leaders(arr):
    if len(arr) < 2:
        return [arr[-1]]
    leaders = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= arr[i+1]:
            leaders.append(arr[i])
    return list(reversed(leaders))