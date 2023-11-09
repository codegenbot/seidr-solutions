
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
    >>> encode('I DoNt KnOw WhAt tO WrItE')
    'k dQnT kNqW wHcT Tq wRkTg'
    """
    message = message.lower().replace('a', 'c').replace('e', 'g').replace('i', 'k').replace('o', 'q').replace('u', 'w').replace('y', 'a').replace('b', 'd').replace('c', 'e').replace('d', 'f').replace('f', 'h').replace('g', 'j').replace('h', 'l').replace('j', 'n').replace('k', 'p').replace('l', 'r').replace('m', 't').replace('n', 'v').replace('p', 'x').replace('q', 'z').upper()

    return message
