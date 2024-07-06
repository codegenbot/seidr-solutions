def count_upper(s):
    return sum(1 for i, c in enumerate(s) if c.isupper() in 'AEIO' and i % 2 == 0)