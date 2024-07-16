def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_message += chr((ord(char) - ord('a') + 1) % 25 + ord('a'))
            else:
                encoded_message += chr((ord(char) - ord('A') + 1) % 25 + ord('A'))
        else:
            if char.isspace():
                encoded_message += " "
            else:
                encoded_message += char
    return encoded_message