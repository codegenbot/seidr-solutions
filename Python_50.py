def decode_shift(s: str):
    result = ""
    shift = -5
    for char in s:
        if char.isalpha():
            ascii_offset = ord('a') if char.islower() else ord('A')
            new_ascii = (ord(char) - ascii_offset + shift) % 26 + ascii_offset
            result += chr(new_ascii)
        else:
            result += char
    return result