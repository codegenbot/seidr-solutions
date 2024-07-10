```
def intersperse(a, b):
    result = []
    a_len = len(a)
    
    for i in range(len(a) + (1 if isinstance(b, int) else 0)):
        if i < a_len: 
            result.append(a[i])
        elif isinstance(b, int) and i % (a_len + 1) != 0:
            result.append(b)
        elif isinstance(b, iter):
            if i > 0: result.append(b.__next__())
    return result