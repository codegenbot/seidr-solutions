def decode_shift(encoded_string):
    for i in range(len(encoded_string)):
        if not encoded_string[i].isalpha():
            shift = int(encoded_string[:i])
            break
    decoded_string = ""
    for char in encoded_string:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            decoded_char = chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
            decoded_string += decoded_char
        else:
            decoded_string += char
    return decoded_string