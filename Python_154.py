```Python
def cycpattern_check(a, b):
    a = a + a  
    for i in range(len(a)):
        if sorted(a[i:]) == sorted(b):
            return True
    return False