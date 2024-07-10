def cycpattern_check(a, b):
    return (any(a[i:i+len(b)] == b for i in range(len(a)-len(b)+1)) or 
            any(a[i:] + a[:i] == b for i in range(len(b)))) if len(b) < len(a) else False