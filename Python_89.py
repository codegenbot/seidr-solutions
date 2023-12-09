def encrypt(s):
    # Create a dictionary to map letters to their encrypted values
    letter_map = {
        'a': 'c',
        'b': 'd',
        'c': 'e',
        'd': 'f',
        'e': 'g',
        'f': 'h',
        'g': 'i',
        'h': 'j',
        'i': 'k',
        'j': 'l',
        'k': 'm',
        'l': 'n',
        'm': 'o',
        'n': 'p',
        'o': 'q',
        'p': 'r',
        'q': 's',
        'r': 't',
        's': 'u',
        't': 'v',
        'u': 'w',
        'v': 'x',
        'w': 'y',
        'x': 'z',
        'y': 'a',
        'z': 'b'
    }
    
    # Use the dictionary to map the input string to its encrypted value
    return ''.join([letter_map[c] for c in s])