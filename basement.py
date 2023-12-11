def basement(vec):
    curr_sum = 0
    for i, x in enumerate(vec):
        curr_sum += x
        if curr_sum < 0:
            return i
    return -1