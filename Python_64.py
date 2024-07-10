def vowels_count(s):
    s = s.lower()
    return sum(1 for char in s if char in "aeiouy" and (char != "y" or s[-1] == "y"))