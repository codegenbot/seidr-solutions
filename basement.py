```
def basement(lst):
    for i in range(len(lst)):
        if sum(lst[:i+1]) <= 0:
            return i
    return -1