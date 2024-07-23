```
def basement(lst):
    for i, _ in enumerate(lst):
        if sum(lst[:i+1]) < 0:
            return i
    return -1