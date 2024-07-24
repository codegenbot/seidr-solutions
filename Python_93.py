```
def encode(message):
    """Complete the function to implement Caesar Cipher encoding.
    Description:
    Encode input string using Caesar Cipher with a shift of 2 for uppercase letters and 2 for lowercase letters.
    
    Args:
        message (str): The input string to be encoded.

    Returns:
        str: The encoded string.
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