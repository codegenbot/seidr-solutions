```
def basement(vector):
    total = 0
    min_index = len(vector)
    for i, num in enumerate(vector):
        if total < 0:
            return i
        total += num
    return -1