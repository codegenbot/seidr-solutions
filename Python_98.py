```
def count_upper(s):
    return sum(1 for c in s if c.upper() in 'AEIO' and ord(c) % 2 == 0)