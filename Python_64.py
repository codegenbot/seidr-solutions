def vowels_count(s):
    s = s.lower()
    count = 0
    i = 0
    for char in s:
        if char in 'aeiouy' and (char == 'y'):
            count += 1
        i += 1
    return count