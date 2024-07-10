def leaders(arr):
    if len(arr) < 2:
        return [arr[-1]]
    leaders = []
    for i in range(len(arr)):
        if i == len(arr) - 1 or arr[i] >= arr[i+1]:
            leaders.append(arr[i])
    return leaders