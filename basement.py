def basement(lst):
    total = 0
    for i in range(len(lst)):
        if total < 0:
            return i
        total += lst[i]
    return len(lst)