def decode_string():
    string_to_decode = input().upper()

    decoded_string = ""
    for char in string_to_decode:
        decoded_string += chr(ord(char) - 1)

    return decoded_string


result = decode_string()
print(result)