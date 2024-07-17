def basement(lst):
    total = 0
    for i in range(len(lst)):
        total += lst[i]
        if total < 0:
            continue
        elif total == 0:
            total = 0
        else:
            return i + 1
    return -1