def basement(vector):
    total = 0
    index = 0
    for num in vector:
        total += num
        if total < 0:
            return index + 1
        index += 1
    return -1