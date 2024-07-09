def basement(v):
    total = 0
    for i, n in enumerate(v, start=1):  
        if total + n < 0:  
            return i
        total += n
    return -1