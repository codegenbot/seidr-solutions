```
def basement(vector):
    total_sum = 0
    for i in range(len(vector)):
        total_sum += vector[i]
        if total_sum < 0:
            return i + 1
    return -1