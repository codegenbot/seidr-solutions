def leaders(arr):
    leaders = []
    max_seen = arr[-1]  
    for x in reversed(arr):
        if x >= max_seen:  
            max_seen = x
            leaders.append(x)
    return list(reversed(leaders))