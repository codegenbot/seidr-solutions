def is_happy(s):
    s = s.lower()
    while len(s) > 1:
        if set(s) == {s[0]}:
            return True
        s = ''.join(sorted(s))
    return False