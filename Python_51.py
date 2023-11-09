

def remove_vowels(text):
    """
    remove_vowels is a function that takes string and returns string without vowels.
    >>> remove_vowels('')
    ''
    >>> remove_vowels("abcdef\nghijklm") == 'bcdf\nghjklm'
    True
    >>> remove_vowels('abcdef') == 'bcdf'
    True
    >>> remove_vowels('aaaaa') == ''
    True
    >>> remove_vowels('aaBAA') == 'B'
    True
    >>> remove_vowels('zbcd') == 'zbcd'
    True
    
    vowels = 'aeiouAEIOU'
    new_text = ""
    for char in text:
        if char not in vowels:
            new_text += char
    return new_text
    """
