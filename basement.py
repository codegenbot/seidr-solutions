```
def basement(lst):
    total_sum = 0
    for i in range(len(lst)):
        if total_sum >= 0 and lst[i] < 0:
            return i
        total_sum += lst[i]
    return -1