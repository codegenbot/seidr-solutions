def get_negative_sum(numbers):
    result = None
    for i in range(len(numbers)):
        if sum(numbers[:i+1]) < 0:
            result = i
            break
    return result