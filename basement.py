def basement(lst):
    total = 0
    index = -1
    for i in range(len(lst)):
        total += lst[i]
        if total < 0:
            return i