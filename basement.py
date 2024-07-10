```
def basement(data):
    for i in range(len(data)):
        if sum(data[:i+1]) < 0:
            return i
    return -1