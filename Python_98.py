```
def count_upper(s):
    return sum(1 for i, c in enumerate(s) if 'AEIO'.count(c.upper()) > 0 and i % 2 == 0)