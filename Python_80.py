```
def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(len(s)-2):
        sub = s[i:i+3]
        if sub.count(sub[0]) > 1 or sub.count(sub[1]) > 1 or sub.count(sub[2]) > 1:
            return False
    return True