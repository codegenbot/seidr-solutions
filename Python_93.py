def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = chr((ord(char) - ord("a") + 13) % 26 + ord("a"))
            else:
                encoded_char = chr((ord(char) - ord("A") + 13) % 26 + ord("A"))
        else:
            encoded_message += char
    return encoded_message