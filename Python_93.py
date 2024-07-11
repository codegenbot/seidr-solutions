```
def encode(message):
    """
    This function shifts each letter in the input string by 3 positions.
    It maintains the case of the original letters.

    Parameters:
    message (str): The input string to be shifted

    Returns:
    str: The shifted string
    """
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                new_char = chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                new_char = chr((ord(char) - 97 + 3) % 26 + 97)
            result += new_char
        else:
            result += char
    return result