```
def cycpattern_check(a, b):
    if not a.isnumeric() or not b.isnumeric():
        return "Invalid input"
    if len(a) != len(b):
        return False
    for i in range(len(a)-1):
        pair_sum = int(a[i]) + int(a[i+1])
        if pair_sum != int(b[i]) + int(b[i+1]):
            return False
    return True