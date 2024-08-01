```
def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        sub_str = s[i:i+3]
        if sub_str.count(sub_str[0]) != 1:
            return False
    return True