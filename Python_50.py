def decode_shift(input_string):
    decoded_string = ''
    for char in input_string:
        decoded_char = chr((ord(char) - 97 + 23) % 26 + 97)
        decoded_string += decoded_char
    return decoded_string