def basement(vector):
    total = 0
    for i in range(len(vector)):
        if total <= 0:
            total += vector[i]
        else:
            return i
    return -1