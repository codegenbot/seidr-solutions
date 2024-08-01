```
def monotonic(l: list):
    if len(l) < 2:
        return True
    inc = l[1] > l[0]
    for i in range(2, len(l)):
        if (inc and l[i] <= l[i-1]) or (not inc and l[i] >= l[i-1]):
            return False
    return True