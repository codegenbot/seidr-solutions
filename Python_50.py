def decode_shift(encoded_string):
    for char in encoded_string:
        if not char.isalpha():
            decoded_string = "Invalid Input"
            break
        elif (ord(char) - ord("A") + 3) % 26 != ord(char[0].upper()) - ord("A"):
            decoded_string = "Invalid Input"
            break
    return decoded_string