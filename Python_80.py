```
def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        sub_s = s[i:i+3]
        if len(set(sub_s)) != 3:
            return False
    return True