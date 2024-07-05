def basement(v):
    total = v[0]
    i = 1
    while True:
        if total <= 0:
            return i
        total += v[i]
        i += 1