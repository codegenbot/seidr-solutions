def basement(input):
    cum_sum = 0
    for i in range(len(input)):
        cum_sum += input[i]
        if cum_sum < 0:
            return i + 1
    return -1