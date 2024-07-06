```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if a[i:] + a[:i] == b:
            return True
    for i in range(len(b)):
        if (a*i)%len(a) <= len(b) and a[int((a*i)/len(a)):(int((a*i))/len(a)+1)*int((a*i)%len(a))==b:
            return True
    return False