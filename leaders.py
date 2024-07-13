def leaders(arr):
    leaders = [arr[0]]
    for i in range(1, len(arr)):
        if arr[i] >= leaders[-1]:
            leaders.append(arr[i])
    return leaders