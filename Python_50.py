```
def decode_shift(encoded_string):
    decoded_string = ""
    for char in encoded_string:
        if not char.isalpha():
            decoded_string += char
        else:
            ascii_offset = 65 if char.isupper() else 97
            try:
                decoded_char = chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
                decoded_string += decoded_char
            except Exception as e:
                return f"Error decoding character: {e}"
    return decoded_string