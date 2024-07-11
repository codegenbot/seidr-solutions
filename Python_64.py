def vowels_count(s):
    count = 0
    for char in s.lower():
        if char in "aeiouy" and (char == "y" or s.index(char) == len(s) - 1):
            count += 1
    return count