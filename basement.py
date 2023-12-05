def get_negative_sum_index(arr):
    return reduce(lambda x, y: x + y, arr[:i+1]) < 0