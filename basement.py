def basement(vector):
    cumulative_sum = 0
    for i in range(len(vector)):
        cumulative_sum += vector[i]
        if cumulative_sum < 0:
            return i
    return -1