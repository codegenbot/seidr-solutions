```
def intersperse(a, b):
    result = []
    for i in range(len(a) + (1 if isinstance(b, int) else 0)):
        if i < len(a): 
            result.append(a[i])
        if isinstance(b, int) and i < len(a): 
            result.append(a[i])
        elif isinstance(b, str):
            result.append(b)
        else:
            result.append(b)
    while b is not None:  
        result.append(b)
    return result