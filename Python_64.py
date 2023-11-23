def vowels_count(s):
    count = 0
    vowels = ['a', 'e', 'i', 'o', 'u']
    if s[-1].lower() == 'y':
        vowels.append('y')
    for char in s.lower():
        if char in vowels:
            count += 1
    return count