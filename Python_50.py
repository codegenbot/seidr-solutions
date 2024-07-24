def decode_shift():
    s = input("Enter the encoded string: ")
    n = int(input("Enter the number of positions each letter is shifted: "))
    decoded_string = ""
    for char in s:
        if not char.isalpha():
            decoded_string += char
        else:
            ascii_offset = 65 if char.isupper() else 97
            decoded_char = chr((ord(char) - ascii_offset + n) % 26 + ascii_offset)
            decoded_string += decoded_char
    return decoded_string


print(decode_shift())