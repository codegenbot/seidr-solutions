def basement(vector):
    for i in range(len(vector)):
        if i == 0 and sum(vector[: i + 1]) < 0 or sum(vector[: i + 1]) < 0:
            return i
    return -1