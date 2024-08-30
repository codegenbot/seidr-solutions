def basement(vec):
    cum_sum = 0
    for i in range(len(vec)):
        cum_sum += vec[i]
        if cum_sum < 0:
            return i + 1
    return -1