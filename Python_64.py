```
def vowels_count(s):
    count = 0
    for char in s:
        if char.lower() in 'aeiouy' and (char.lower() == 'y' or s.index(char) != len(s) - 1):
            count += 1
    return count