def basement(lst):
    total_sum = 0
    for i in range(len(lst)):
        total_sum += lst[i]
        if total_sum < 0:
            return i
    return -1