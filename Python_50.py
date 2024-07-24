```
def decode_shift(encoded_string):
    for char in encoded_string:
        if ord(char) - 65 < 0 or ord(char) - 65 > 22:
            return "Invalid Input"
    decoded_string = ""
    for char in encoded_string:
        if not char.isalpha():
            decoded_string += char
        elif char.isupper():
            ascii_offset = 65
        else:
            ascii_offset = 97
        decoded_char = chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        decoded_string += decoded_char
    return decoded_string