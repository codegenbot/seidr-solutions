def get_negative_sum_index(numbers):
    for i in range(len(numbers)):
        if sum(numbers[:i+1]) < 0:
            return i
    return None