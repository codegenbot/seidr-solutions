FIX = """
Add more test cases.
"""

def vowels_count(s):
    count = 0
    vowels = set(['a', 'e', 'i', 'o', 'u'])
    if s[-1].lower() == 'y':
        vowels.add('y')
    for char in s.lower():
        if char in vowels:
            count += 1
    return count