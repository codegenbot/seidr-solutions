def leaders(arr):
    leaders = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= arr[-1]:
            leaders.append(arr[i])
            arr.pop()
    return reversed(leaders)