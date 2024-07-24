    def decode_shift(encoded_string):
        decoded_string = ""
        for char in encoded_string:
            if char.isalpha():
                ascii_offset = 65 if char.isupper() else 97
                decoded_char = chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
                decoded_string += decoded_char
            else:
                decoded_string += char
        return decoded_string