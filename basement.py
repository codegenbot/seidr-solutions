def basement(vector):
    total = 0
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            return i + 1
        elif total == 0: 
            total = 0
    return -1