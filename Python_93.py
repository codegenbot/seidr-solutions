def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        new_char = chr((ord(char) - ord('A') + 2) % 26 + ord('A')) if char.upper() in vowels else char.swapcase()
        encoded_message += new_char
    return encoded_message