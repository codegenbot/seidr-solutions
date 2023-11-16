
def encode(message):
    """
    Write a function that takes a message, and encodes in such a 
    way that it swaps case of all letters, replaces all vowels in 
    the message with the letter that appears 2 places ahead of that 
    vowel in the english alphabet. 
    Assume only letters.
    Assume that the vowels are aeiou. 
    
    Examples:
    >>> encode('test')
    'TGST'
    >>> encode('This is a message')
    'tHKS KS C MGSSCGG'
    """
    new_message = ''
    vowels = 'aeiou'
    for letter in message:
        if letter.isupper():
            new_message += letter.lower()
        elif letter.islower():
            new_message += letter.upper()
        if letter in vowels:
            new_message += vowels[vowels.index(letter) + 2]
        else:
            new_message += letter
    return new_message


encode('This is a message')
