```
def is_happy(s):
    s = s.lower()
    seen = set()
    while len(s) > 1:
        seen.add(''.join(sorted(s)))
        new_s = ''
        for c in s:
            if c.isdigit():
                new_s += str(int(c) + 1) if int(c) < 9 else '0'
            elif ord(c) <= 122:
                new_s += chr(ord(c) + 1)
            elif c == 'y':
                new_s += 'z'
            else:
                new_s += chr(ord(c) - 26)
        s = new_s
    return True