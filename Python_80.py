```
def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        subset = s[i:i+3]
        if subset.count(subset[0]) == 1:
            continue
        else:
            return False
    return True