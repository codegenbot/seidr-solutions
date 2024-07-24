def vowels_count(s):
    s = s.lower()
    return sum(1 for c in s if c in 'aeiouy' and (c != 'y' or s[-1] == 'y'))