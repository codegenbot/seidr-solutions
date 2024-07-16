def leaders(arr):
    leaders = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= leaders[0]:
            leaders = [arr[i]] + leaders
    return leaders