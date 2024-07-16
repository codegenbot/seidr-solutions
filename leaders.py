def leaders(arr):
    leaders = [arr[-1]]  
    max_seen = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if max_seen >= arr[i]:
            leaders.append(arr[i])
        max_seen = arr[i]
    return reversed(leaders)