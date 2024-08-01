```
def vowels_count(s):
    s = s.lower()
    count = 0
    for char in s:
        if char in 'aeiouy':
            if char == 'y' and s[-1] != 'y':
                continue
            count += 1
    return count