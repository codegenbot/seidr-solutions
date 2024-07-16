def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_message += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            else:
                encoded_message += chr((ord(char) - ord('A') + 2) % 26 + ord('A') if ord(char) >= ord('A') and ord(char) <= ord('Z') else ord(char))
        elif char.isspace():
            encoded_message += " "
        else:
            encoded_message += char
    return encoded_message