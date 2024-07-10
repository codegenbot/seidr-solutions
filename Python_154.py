```Python
def cycpattern_check(a, b):
    return (a in b+b or b in a+a) if len(a) > 0 and len(b) > 0 else False