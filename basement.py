def basement(vector):
    total = 0
    min_index = None
    for i, num in enumerate(vector):
        if total < 0:
            min_index = i
        total += num
    return min_index if min_index != None else -1