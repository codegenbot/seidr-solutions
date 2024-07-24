def get_user_input():
    encoded_string = input("Enter the encoded string: ")
    return encoded_string

def get_shift_value():
    shift_value = int(input("Enter the shift value: "))
    return shift_value

def decode_shift(encoded_string, shift_value):
    decoded_string = ""
    for char in encoded_string:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            decoded_char = chr((ord(char) - ascii_offset + shift_value) % 26 + ascii_offset)
            decoded_string += decoded_char
        else:
            decoded_string += char
    return decoded_string

encoded_string = get_user_input()
shift_value = get_shift_value()

decoded_string = decode_shift(encoded_string, shift_value)

print(f"Decoded string: {decoded_string}")