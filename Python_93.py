
def encode(message):
    """
    Write a function that takes a message, and encodes in such a 
    way that it swaps case of all letters, replaces all vowels in 
    the message with the letter that appears 2 places ahead of that 
    vowel in the english alphabet. 
    Assume only letters. 
    
    Examples:
    >>> encode('test')
    'TGST'
    >>> encode('This is a message')
    'tHKS KS C MGSSCGG'
    """
    encoded_message = ""

    for letter in message:
        if letter.lower() == 'a':
            encoded_message += 'd'
        elif letter.lower() == 'e':
            encoded_message += 'h'
        elif letter.lower() == 'i':
            encoded_message += 'l'
        elif letter.lower() == 'o':
            encoded_message += 'r'
        elif letter.lower() == 'u':
            encoded_message += 'y'
        else:
            encoded_message += letter.upper()

    return encoded_message
