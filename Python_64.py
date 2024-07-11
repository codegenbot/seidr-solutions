```
def vowels_count(s):
    s = s.lower()
    count = 0
    for char in s:
        if char in 'aeiou' or (char == 'y' and s.index(char) == len(s) - 1):
            count += 1
    return count