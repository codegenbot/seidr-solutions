```
def find_zero(xs):
    n = len(xs)
    for i in range(n):
        if xs[i] == 0:
            return i
    return -1