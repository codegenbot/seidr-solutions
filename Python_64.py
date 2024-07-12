def vowels_count(s):
    s = s.lower()
    count = 0
    for i, char in enumerate(s):
        if char in 'aeiouy' and (char == 'y'):
            count += 1
    return count