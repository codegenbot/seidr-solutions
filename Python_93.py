def encode_message(message):
    """
    This function takes a message as input and returns the encoded message.
    The encoding is done by shifting each alphabetical character in the message
    two positions forward in the alphabet. If the character is already 'z' or 'Z',
    it wraps around to the beginning of the alphabet.

    Parameters:
    message (str): The input message to be encoded

    Returns:
    str: The encoded message
    """

    def encode(message):
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

    print(encode(input("Enter your message: ")))