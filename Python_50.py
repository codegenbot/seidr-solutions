```
def decode_shift(encoded_string):
    parts = encoded_string.split(":")
    if len(parts) != 2:
        return "Invalid input"
    
    original_message, shift_number = parts
    decoded_string = ""
    for char in original_message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            decoded_char = chr((ord(char) - ascii_offset + int(shift_number)) % 26 + ascii_offset)
            decoded_string += decoded_char
        else:
            decoded_string += char
    
    return decoded_string