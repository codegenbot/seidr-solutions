```
def count_upper(s):
    return sum(1 for i, c in enumerate(s) if 'AEIO'.index(c.upper()) % 2 == 0 and c.isupper())