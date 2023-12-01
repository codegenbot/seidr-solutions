def vowels_count(s):
    count = 0
    vowels = ['a', 'e', 'i', 'o', 'u']
    if s[-1] == 'y':
        vowels.append('y')
    for char in s:
        if char.lower() in vowels:
            count += 1
    return count