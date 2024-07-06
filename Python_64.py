def vowels_count(s):
    count = 0
    for char in s:
        if char.lower() in 'aeiouy' and (char.isalpha() or char == 'y'):
            count += 1
    return count