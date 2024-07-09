```
def basement(vector):
    for i, v in enumerate(vector):
        if sum(vector[:i+1]) < 0:
            return i
    return -1