def vowels_count(s):
    vowels = 'aeiou'
    count = 0
    for i in range(len(s)):
        if s[i].lower() in vowels or (i == len(s)-1 and s[i].lower() == 'y'):
            count += 1
    return count