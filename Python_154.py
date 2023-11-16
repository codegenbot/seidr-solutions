
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word"""

    if a in b:
        return True
    else:
        for i in range(1,len(b)):
            b = b[-1] + b[:-1]
            if a in b:
                return True
    return False
