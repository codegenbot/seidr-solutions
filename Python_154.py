````
def cycpattern_check(a, b):
    """Check if string a is a cyclic rotation of string b"""
    if len(b) == 0:
        return True
    if a == b:
        return True
    for i in range(len(a)):
        rotated_a = a[i:] + a[:i]
        if rotated_a == b or b in rotated_a:
            return True
    return False
"""