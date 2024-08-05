def basement(indexes):
    total_sum = 0
    for i in range(len(indexes)):
        total_sum += indexes[i]
        if total_sum < 0:
            return i
    return -1