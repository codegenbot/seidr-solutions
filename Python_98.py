```
def count_upper(s):
    return sum(1 for i, c in enumerate(s) if 'AEIOU'.upper()[i%5].isupper() and c.isupper())