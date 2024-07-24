```
def decode_shift(encoded_string):
    decoded_string = ""
    shift_value = None
    for char in encoded_string:
        if not char.isalpha():
            shift_value = int(char)
        elif shift_value is None:
            ascii_offset = 65 if char.isupper() else 97
            shift_value = (ord(char) - ascii_offset + 3) % 26
        else:
            ascii_offset = 65 if char.isupper() else 97
            decoded_char = chr((ord(char) - ascii_offset + shift_value) % 26 + ascii_offset)
            decoded_string += decoded_char
    return decoded_string