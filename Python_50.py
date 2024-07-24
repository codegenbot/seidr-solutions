```
def decode_shift(encoded_string):
    decoded_string = ""
    for char in encoded_string:
        if char.isalpha():
            if char.isupper():
                decoded_char = chr((ord(char) - 65 + int(input("Enter the shift value:"))) % 26 + 65)
            else:
                decoded_char = chr((ord(char) - 97 + int(input("Enter the shift value:"))) % 26 + 97)
        else:
            decoded_char = char
        decoded_string += decoded_char
    return decoded_string