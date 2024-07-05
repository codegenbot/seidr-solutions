def basement(v):
    total = 0
    i = 0
    while True:
        total += v[i]
        if total < 0:
            return total == 0 and i or i + 1
        i += 1