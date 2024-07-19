```
def is_happy(s):
    s = s.lower()
    while len(s) > 1:
        if set(s[0]) == set(s):
            return True
        s = ''.join(sorted(s))
    return False