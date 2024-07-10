def vowels_count(s):
    vowels = 'aeiou'
    if s[-1].lower() == 'y':
        vowels += 'y'
    return sum(1 for char in s.lower() if char in vowels)