def basement(vector):
    total = 0
    for i in range(len(vector)):
        if total <= 0:
            total += vector[i]
        else:
            total += vector[i] - 1
        if total < 0:
            return i + 1
    return -1