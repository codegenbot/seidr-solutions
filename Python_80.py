```
def is_happy(s):
    s = s.lower()
    seen = set()
    while len(s) > 1:
        s = ''.join(sorted(s))
        if s in seen:
            return False
        seen.add(s)
    return True