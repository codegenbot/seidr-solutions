def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            base = ord('a' if char.islower() else 'A')
            shift = 3 if char.islower() else 3 + 26
            result += chr((ord(char) - base + shift) % 26 + base)
        else:
            result += char
    return result