def decode_shift(s):
    decoded = ""
    for char in s:
        if char.isalpha():
            decoded += chr((ord(char) - 97 + 25) % 26 + 97)
        else:
            decoded += char
    return decoded