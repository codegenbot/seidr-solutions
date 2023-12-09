def encrypt(s):
    # Create a dictionary to map letters to their encrypted values
    letter_map = {
        'a': 'e',
        'b': 'f',
        'c': 'g',
        'd': 'h',
        'e': 'i',
        'f': 'j',
        'g': 'k',
        'h': 'l',
        'i': 'm',
        'j': 'n',
        'k': 'o',
        'l': 'p',
        'm': 'q',
        'n': 'r',
        'o': 's',
        'p': 't',
        'q': 'u',
        'r': 'v',
        's': 'w',
        't': 'x',
        'u': 'y',
        'v': 'z'
    }
    
    # Use the dictionary to map the input string to its encrypted value
    return ''.join([letter_map[c] for c in s])