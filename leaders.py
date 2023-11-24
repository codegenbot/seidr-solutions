def find_leaders(arr):
    leaders = []
    max_so_far = arr[-1]
    
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= max_so_far:
            leaders.append(arr[i])
            max_so_far = arr[i]
            
    leaders.append(max_so_far)
    leaders.reverse()
    
    return leaders