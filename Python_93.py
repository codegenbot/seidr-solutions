def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                encoded_message += chr((ord(char) + 2 - ord('a')) % 26 + ord('a'))
            elif char.lower() in "bcdfghjklmnpqrstvwxyz":
                encoded_message += chr((ord(char) + 2 - ord('a')) % 26 + ord('a'))
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message