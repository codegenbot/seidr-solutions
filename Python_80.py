def is_happy(s):
    s = s.lower()
    while len(s) > 1:
        if set({c for c in s}) == set(s):
            return True
        s = ''.join(sorted(s))
    return False