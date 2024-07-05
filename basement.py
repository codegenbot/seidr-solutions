def basement(v):
    total = 1
    i = 0
    while True:
        total += v[i]
        if total < 0:
            return i + 1
        i += 1