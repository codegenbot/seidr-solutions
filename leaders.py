def leaders(arr):
    leader = [arr[i] for i in range(len(arr)-1, -1, -1) if arr[i] >= max(arr[:i])]
    return leader