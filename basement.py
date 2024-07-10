```
def basement(vector):
    for i, num in enumerate(vector):
        total = 0
        for j in range(i+1):
            total += vector[j]
        if total < 0:
            return i + 1
    return -1