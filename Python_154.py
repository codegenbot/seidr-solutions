def cycpattern_check(a, b): 
    return str(b) * (len(a) // len(b)) + str(b)[:len(a) % len(b)] == a