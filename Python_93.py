def encode(message):
    vowel_map = {"a": "c", "e": "g", "i": "k", "o": "m", "u": "q"}
    encoded_message = ""
    for char in message:
        if char.lower() in vowel_map:
            ascii_code = ord(char) + 2
            encoded_message += chr(ascii_code)
        else:
            encoded_message += char
    return encoded_message