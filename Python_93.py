def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
             new_char = chr(((ord(char) - ord('A') + 3) % 26) + ord('A'))
             if char.islower():
                 encoded_message += new_char.lower()
             else:
                 encoded_message += new_char.upper()
        else:
             encoded_message += char

    return encoded_message