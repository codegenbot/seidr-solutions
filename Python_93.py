```
def shift_encode(message):
    """
    This function shifts each letter in the input message by two positions in the alphabet.
    If the character is not a letter (i.e., it's a digit, punctuation mark, or whitespace), 
    it leaves the character unchanged.

    Parameters:
    message (str): The input string to be encoded.

    Returns:
    str: The encoded string with each letter shifted by two positions in the alphabet.
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