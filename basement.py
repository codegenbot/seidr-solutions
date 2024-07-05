def basement(vector):
    running_sum = 0
    for i in range(len(vector)):
        running_sum += vector[i]
        if running_sum < 0:
            return i + 1
    return -1