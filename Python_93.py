
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
    >>> encode('test')
    'k dQnT kNqW wHcT Tq wRkTg'
    """
    message = message.lower().replace('a', 'c').replace('e', 'g').replace('i', 'k').replace('o', 'q').replace('u', 'w').replace('y', 'a').replace('b', 'd').replace('c', 'e').replace('g', 'i').replace('k', 'm').replace('q', 's').replace('w', 'y').replace('d', 'f').replace('h', 'j').replace('l', 'n').replace('p', 'r').replace('t', 'v').replace('x', 'z').replace('f', 'h').replace('j', 'l').replace('n', 'p').replace('r', 't').replace('v', 'x').replace('z', 'b').replace('m', 'o').replace('s', 'u').replace('A', 'C').replace('E', 'G').replace('I', 'K').replace('O', 'Q').replace('U', 'W').replace('Y', 'A').replace('B', 'D').replace('C', 'E').replace('G', 'I').replace('K', 'M').replace('Q', 'S').replace('W', 'Y').replace('D', 'F').replace('H', 'J').replace('L', 'N').replace('P', 'R').replace('T', 'V').replace('X', 'Z').replace('F', 'H').replace('J', 'L').replace('N', 'P').replace('R', 'T').replace('V', 'X').replace('Z', 'B').replace('M', 'O').replace('S', 'U').replace(' ', ' ')


    return message

if __name__ == "__main__":
    # This will only be executed when this file is run directly.
    # It will not be executed when imported.
    assert encode("test") == "TGST"
    assert encode("test") == "k dQnT kNqW wHcT Tq wRkTg"
