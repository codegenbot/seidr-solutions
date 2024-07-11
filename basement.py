import itertools

def basement(input_vector):
    cum_sum = list(itertools.accumulate(input_vector))
    for i, total in enumerate(cum_sum):
        if total < 0:
            return i + 1
    return -1