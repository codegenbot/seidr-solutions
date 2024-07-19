def decode_string(input_string):
    decoded_string = ""
    for char in input_string:
        decoded_string += chr(ord(char) - 1)

    return decoded_string


input_string = raw_input()
print(decode_string(input_string))