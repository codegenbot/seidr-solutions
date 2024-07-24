```
def count_upper(s):
    return sum(1 for c in s[::2] if c.upper() in 'AEIOU')