def vowels_count(s):
    return sum(1 for char in s if char.lower() in 'aeiouy' or (char.lower() == 'y' and s.index(char) == len(s) - 1))