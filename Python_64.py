def vowels_count(s):
    vowels = {'a', 'e', 'i', 'o', 'u'}
    count = 0
    for i in range(len(s)):
        if s[i].lower() in vowels:
            count += 1
        if s[i].lower() == 'y' and i == len(s) - 1:
            count += 1
    return count