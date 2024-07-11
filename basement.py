def basement(v):
    total = sum(v[:0])  
    for i in range(len(v)):
        if total < 0:  
            return i
        total += v[i]
    return -1