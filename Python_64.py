FIX = """
Add more test cases.
"""

def vowels_count(s):
    count = 0
    vowels = 'aeiou'
    if s[-1].lower() == 'y':
        vowels += 'y'
    for char in s.lower():
        if char in vowels:
            count += 1
    return count