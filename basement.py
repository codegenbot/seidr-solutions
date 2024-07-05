def basement(v):
    total = 0
    i = 0
    while True:
        if total < 0 and i > 0: 
            return i + 1
        total += v[i]
        i += 1