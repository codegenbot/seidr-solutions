```
def cycpattern_check(a, b):
    len_a = len(a)
    len_b = len(b)

    if not a.isnumeric() or not b.isnumeric():
        return "Invalid input"

    for i in range(len_a - len_b + 1):
        match = True
        for j in range(len_b):
            if a[i+j] != str(b[j]):
                match = False
                break
        
        if match:
            return True
    
    return False