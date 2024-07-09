```
def basement(input):
    for i, v in enumerate([0] + input):
        s = sum(input[:i])
        if s < 0:
            return i
    return -1