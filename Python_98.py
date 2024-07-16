def count_upper(s):
    return sum(1 for i, char in enumerate(s) if i % 2 == 0 and char.upper() in 'AEIOU')