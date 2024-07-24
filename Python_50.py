for char in s:
    if char.isalpha():
        ascii_offset = 65 if char.isupper() else 97
        decoded_char = chr((ord(char) - ascii_offset + n) % 26 + ascii_offset)
        decoded_string += decoded_char
    elif not char.isalpha():  
        decoded_string += char