import itertools

def cycpattern_check(a, b):
    rotations = itertools.cycle(a)
    for i in range(len(a)):
        if b in "".join(next(rotations) for _ in range(len(a))):
            return True
    return False