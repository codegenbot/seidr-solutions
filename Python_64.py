def vowels_count(s):
    vowels = ['a', 'e', 'i', 'o', 'u']
    count = 0
    if s[-1].lower() == 'y':
        vowels.append('y')
    for char in s.lower():
        if char in vowels:
            count += 1
    return count