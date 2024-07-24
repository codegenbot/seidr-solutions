def vowels_count(s):
    vowels = 'aeiou'
    count = 0
    if s[-1].lower() == 'y':
        vowels += 'y'
    for char in s.lower():
        if char in vowels:
            count += 1
    return count