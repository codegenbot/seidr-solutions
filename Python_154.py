````
def cycpattern_check(a, b):
    if len(b) != len(a):
        return False

    for _ in range(len(a)):
        if a * 2 == b:
            return True
    return False
```