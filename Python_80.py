```
def is_happy(s):
    s = s.lower()
    seen = set()
    while len(s) > 1:
        seen.add(''.join(sorted(s)))
        new_s = ''
        for c in s:
            if c in '0123456789':
                new_s += str(int(c) + 1) if int(c) < 9 else '0'
            else:
                new_s += chr(ord(c) + 1) if ord(c) < 122 else 'z' if c == 'y' else chr(ord(c) - 26)
        s = new_s
    return True