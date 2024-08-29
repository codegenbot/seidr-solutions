def leaders(a):
    max_seen = a[-1]
    leaders = [a[-1]]
    
    for i in range(len(a) - 2, -1, -1):
        if a[i] >= max_seen:
            leaders.insert(0, a[i])
            max_seen = a[i]
            
    return leaders