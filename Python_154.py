def cycpattern_check(a, b):
    return any(b in a[i:] + a[:i] for i in range(len(a)))

def check(f):
    assert f("winemtt", "tinem") == True, "test #5"