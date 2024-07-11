def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = ord('A') if char.isupper() else ord('a')
            result += chr((ord(char) - ascii_offset + 2) % 26 + ascii_offset)
        else:
            result += char
    return result