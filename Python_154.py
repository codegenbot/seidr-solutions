```
from itertools import cycle

def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for _ in range(len(a)):
        a = a[1:] + a[0]
        if a[i:i+len(b)] == b:
            return True
    return False