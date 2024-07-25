def vowels_count(s):
    s = s.lower()
    count = 0
    for i, char in enumerate(s):
        if char in 'aeiouy' and (char == 'y' or i == len(s) - 1):
            count += 1
    return count