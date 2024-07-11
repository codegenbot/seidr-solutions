```
def count_upper(s):
    return sum(1 for i, c in enumerate(s) if i % 2 == 0 and c.upper() in 'AEIOU')