def vowels_count(s):
    return sum([1 for char in s.lower() if char in 'aeiouy' and (s.lower().index(char) == len(s.lower()) - 1 or char != 'y')])