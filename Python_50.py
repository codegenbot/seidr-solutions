def decode_shift(encoded_string):
    """
    The "decode_shift" function is intended to decode a string that was encoded by shifting each letter in the original string by a certain number of positions down the alphabet.
    
    Parameters:
    encoded_string (str)
    
    Returns:
    str
    
    Example: 
    >>> decode_shift("khoor")
    'hello'
    """
    decoded_string = ""
    for char in encoded_string:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            decoded_char = chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
            decoded_string += decoded_char
        else:
            decoded_string += char
    return decoded_string