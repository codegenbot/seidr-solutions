def basement(lst):
    total = 0
    for i, num in enumerate(lst):
        if total < 0:
            return i
        total += num
    return -1