```Python
def cycpattern_check(a, b):
    for i in range(len(a)):
        if a[i:] + a[:i] == b:
            return True
    for i in range(1, len(a) // 2 + 1):
        if (a * int((len(b) / len(a)) + 1)).find(b) != -1:
            return True
    return False