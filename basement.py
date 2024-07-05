def basement(v):
    total = 0
    i = 1
    while True:
        if total > 0:
            total = 0
            i = 1
        total += v[i-1]
        if total < 0:
            return i - 1
        i += 1