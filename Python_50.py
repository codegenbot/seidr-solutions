def decode_shift(encoded_string):
    decoded_string = ""
    shift_value = 3
    for char in encoded_string:
        if not char.isalpha():
            decoded_string += char
        else:
            ascii_offset = 65 if char.isupper() else 97
            decoded_char = chr((ord(char) - ascii_offset + shift_value) % 26 + ascii_offset)
            decoded_string += decoded_char
    return decoded_string