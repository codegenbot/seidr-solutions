def basement(vector):
    total = -1  
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            return i + 1
    return -1