```
def encode_message(message):
    """
    Shifts each letter in a message up by two positions in the alphabet.
    
    Parameters:
    message (str): The input message to be encoded.
    
    Returns:
    str: The encoded message.
    """
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 + 2) % 26 + 65)
            else:
                result += chr((ord(char) - 97 + 2) % 26 + 97)
        else:
            result += char
    return result