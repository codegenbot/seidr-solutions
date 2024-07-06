def basement(vector):
    total = 0
    for i in range(len(vector)):
        total += vector[i] if total >= 0 else 1
        if total < 0:
            return i + 1
    return -1