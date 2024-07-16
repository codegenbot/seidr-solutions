```
def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if set(chunk)[0] == set(chunk)[1] or set(chunk)[0] == set(chunk)[2] or set(chunk)[1] == set(chunk)[2]:
            return False
    return True