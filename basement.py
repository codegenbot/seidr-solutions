def basement(v):
    total = 0
    i = 0
    while True:
        total += v[i]
        if total <= 0:
            return i
        i += 1