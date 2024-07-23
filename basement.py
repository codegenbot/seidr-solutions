def basement(vector):
    total = 0
    min_index = len(vector)
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            min_index = i
    return -1 if min_index == len(vector) else min_index