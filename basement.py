def basement(vector):
    cum_sum = 0
    for i in range(len(vector)):
        cum_sum += vector[i]
        if cum_sum < 0:
            return i+1
    return -1