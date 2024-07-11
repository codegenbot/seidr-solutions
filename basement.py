def basement(indexes):
    for i in range(len(indexes)):
        total = 0
        for j in range(i + 1):
            total += indexes[j]
        if total < 0:
            return i
    return -1