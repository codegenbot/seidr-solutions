def basement(v):
    total = sum(v[:1])  
    if total < 0:
        return 0

    total = 0
    for i, n in enumerate(v[1:], start=1):  
        total += n
        if total < 0:
            return i
    return -1