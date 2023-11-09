
def encode(message):
    # TODO: write me!
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
    message = message.lower().replace('a', 'c').replace('e', 'g').replace('i', 'k').replace('o', 'q').replace('u', 'w').replace('y', 'a').replace('b', 'd').upper().replace('c', 'e').replace('g', 'i').replace('k', 'm').replace('q', 's').replace('w', 'y').replace('d', 'f').replace('h', 'j').replace('l', 'n').replace('p', 'r').replace('t', 'v').replace('x', 'z').replace('f', 'h').replace('j', 'l').replace('n', 'p').replace('r', 't').replace('v', 'x').replace('z', 'b').replace('s', 'u')

    return message
