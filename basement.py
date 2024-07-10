def basement(vector):
    total = vector[0]
    for i, num in enumerate(vector[1:], start=1):
        total += num
        if total < 0:
            return i
    return -1