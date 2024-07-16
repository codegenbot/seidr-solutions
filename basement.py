def basement(lst):
    for i in range(len(lst)):
        sum_total = sum(lst[:i+1])
        if sum_total < 0:
            return i
    return -1