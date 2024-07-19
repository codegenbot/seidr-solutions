```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.islower():
                base = ord('a')
                shift = 3
            else:
                base = ord('A')
                shift = 3 + 26
            result += chr((ord(char) - base + shift) % 26 + base)
        else:
            result += char
    return result