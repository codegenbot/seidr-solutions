def leaders(arr):
    max_right = arr[0]
    leaders = []
    
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
            
    return [max(i, max_right) for i in reversed(arr)] + [max_right]