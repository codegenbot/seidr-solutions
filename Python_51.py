

def remove_vowels(text):
    """
    remove_vowels is a function that takes string and returns string without vowels.
    >>> remove_vowels('')
    ''
    >>> remove_vowels("abcdef\nghijklm")
    'bcdf\nghjklm'
    >>> remove_vowels('abcdef')
    'bcdf'
    >>> remove_vowels('aaaaa')
    ''
    >>> remove_vowels('aaBAA')
    'B'
    >>> remove_vowels('ybcd')
    'ybcd'

    vowels = 'aeiou'
    text_without_vowels = ''
    for char in text:
        if char.lower() not in vowels:
            text_without_vowels += char

    return text_without_vowels
    """
