def basement(vector):
    acc = 0
    for i in range(len(vector)):
        if acc < 0:
            return i
        acc += vector[i]
    return -1