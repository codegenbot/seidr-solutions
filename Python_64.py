def vowels_count(s):
    return sum(1 for char in s.lower() if char in 'aeiouy' and (char == 'y' or i == len(s) - 1))