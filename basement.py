def basement(vector):
    total = 0
    for i in range(len(vector)):
        total = 0
        for j in range(i+1):
            total += vector[j]
        if total < 0:
            return i + 1
    return -1