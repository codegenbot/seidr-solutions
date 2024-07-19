def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            base = ord('a' if char.islower() else 'A')
            result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result