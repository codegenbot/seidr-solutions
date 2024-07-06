
def encode(message):
    encoded = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded += chr(ord('A') + ord(char) - ord('a'))
            else:
                encoded += chr(ord('a') + ord(char) - ord('A'))
        else:
            encoded += char
    return encoded