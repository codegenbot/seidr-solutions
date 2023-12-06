def vowels_count(s):
    vowels = ['a', 'e', 'i', 'o', 'u']
    count = 0
    for c in s:
        if c.lower() in vowels:
            count += 1
    return count