```
def count_upper(s):
    return sum(1 for c in s[::2] if 'AEIO'.upper().index(c.upper()) < 5)