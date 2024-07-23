def basement(vector):
    total = 0
    min_index = len(vector)
    for i, num in enumerate(vector):
        if total <= 0:
            total += num
        else:
            min_index = i
            break
    return -1 if min_index == len(vector) else min_index