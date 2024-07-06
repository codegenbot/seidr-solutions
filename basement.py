```
def basement(vector):
    total = 0
    min_index = len(vector)
    for i in range(len(vector)):
        total += vector[i]
        if total < 0:
            min_index = i + 1
    return -1 if min_index == len(vector) else min_index