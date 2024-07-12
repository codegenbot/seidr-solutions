def cycpattern_check(a, b):
    len_a = len(a)
    len_b = len(b)
    
    for i in range(len_a - len_b + 1):
        if a[i:i+len_b] * (len_a // len_b) + a[i+i % len_b:] == a:
            return 1
    return -1