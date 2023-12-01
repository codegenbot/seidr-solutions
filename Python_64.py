def vowels_count(s):
    vowels = ['a', 'e', 'i', 'o', 'u']
    count = 0
    if s[-1] == 'y':
        count += 1
    for char in s:
        if char.lower() in vowels:
            count += 1
    return count