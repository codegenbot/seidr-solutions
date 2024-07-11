```
def basement(v):
    total = 0
    first_negative = -1
    for i in range(len(v)):
        total += v[i]
        if total < 0:
            first_negative = i + 1
            break
    return first_negative if first_negative > 0 else -1