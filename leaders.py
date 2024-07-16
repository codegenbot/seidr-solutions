def leaders(arr):
    n = len(arr)
    leaders = []
    
    for i in range(n-1, -1, -1):
        leaders.append(arr[i] if not leaders or arr[i] >= max(leaders) else None)
            
    return [x for x in reversed(leaders) if x is not None]