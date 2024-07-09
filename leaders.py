def leaders(arr):
    leaders = []
    max_right = arr[-1]
    
    for i in range(len(arr)):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
            
    return leaders[::-1]