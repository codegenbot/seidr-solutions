def encode(message):
    result = ""
    for char in message:
        if char.isspace():
            result += char
        elif not char.isalpha():
            result += char
        else:
            ascii_offset = 65 if char.isupper() else 97
            shifted_char = chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
            if char.isupper():
                result += shifted_char if shifted_char.isupper() else shifted_char.lower()
            else:
                result += shifted_char if shifted_char.islower() else shifted_char.upper()
    return result