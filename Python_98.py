```
def count_upper(s):
    vowels = 'AEIOU'
    return sum(1 for i, c in enumerate(s) if c.upper() in vowels and i % 2 == 0)