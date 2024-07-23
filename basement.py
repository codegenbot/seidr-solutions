def basement(vector):
    for i, num in enumerate(vector):
        if total := 0 - sum(vector[:i+1]) < 0:
            return i
    return -1