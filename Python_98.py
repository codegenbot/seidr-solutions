```
def count_upper(s):
    return sum(1 for i, c in enumerate(s) if 'AEIOU'.upper()[i % len('AEIOU')] == c.upper() and c.isupper())