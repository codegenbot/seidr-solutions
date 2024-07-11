def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            shift = 2
            ascii_offset = ord('a') if char.islower() else ord('A')
            result += chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
        else:
            result += char
    return result