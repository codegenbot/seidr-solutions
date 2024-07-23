```
def basement(lst):
    min_total = 0
    for i in range(len(lst)):
        total = sum(lst[:i+1])
        if total < min_total:
            return i
        min_total = total
    return -1