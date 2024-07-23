```
def basement(vector):
    total = 0
    min_index = -1
    for i, num in enumerate(vector):
        if total < 0:
            min_index = i
            break
        total += num
    return min_index