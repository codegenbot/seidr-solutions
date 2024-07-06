Here is the corrected function definition:

def cycpattern_check(a, b):
    if len(b) != len(a):
        return False
    for i in range(len(a)):
        for j in [-1, 0, 1]:
            if a[i:] + (a[:i] if j == 0 else a[i::-1])[::j] == b:
                return True
    return False