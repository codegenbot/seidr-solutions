def cycpattern_check(a, b):
    a += a  
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if a[i:i+len(b)].lower() == b.lower():
            return True
    return False