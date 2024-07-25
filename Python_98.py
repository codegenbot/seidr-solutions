def count_upper(s):
    return sum(1 for i, char in enumerate(s) if char.upper() in 'AEIOU' and i % 2 == 0)