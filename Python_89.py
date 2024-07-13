def encrypt(s):
    result = ""
    for i, char in enumerate(s):
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            offset = (ord(char) - ascii_offset + 3) % 26
            result += chr((offset - (1 if not char.isalpha() or i == 0 else 0)) + ascii_offset)
        else:
            result += char
    return result