def decode_shift():
    encoded_string = input("Enter the encoded string: ")
    result = ""
    prev_shift = None
    shift = 0
    for char in encoded_string:
        if char.isalpha():
            ascii_offset = ord("a") if char.islower() else ord("A")
            char_code = ord(char) - ascii_offset
            decoded_char_code = (char_code + shift) % 26
            result += chr(decoded_char_code + ascii_offset)
        elif char.isdigit():
            shift = int(char)
        else:
            result += char
    return result

print(decode_shift())