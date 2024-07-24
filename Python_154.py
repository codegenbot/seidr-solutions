```
def cycpattern_check(a, b):
    return str(b) * (len(str(a)) // len(str(b))) + str(b)[:len(str(a)) % len(str(b))] == str(a) if str(b) != '' else True