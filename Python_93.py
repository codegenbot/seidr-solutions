def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            base = ord('a') if char.islower() else ord('A')
            new_char = chr(((ord(char) - base + 2) % 26) + base)
            encoded_message += new_char
        else:
            encoded_message += char

    return encoded_message