def vowels_count(s):
    vowels = 'aeiou'
    count = sum(1 for char in s if char.lower() in vowels)
    if s[-1].lower() == 'y' and s[-2] not in vowels:
        count += 1
    return count