def decode_string(input_string):
    decoded_string = ""
    for char in input_string:
        decoded_string += chr(ord(char) - 1)

    return decoded_string

input_string = str(input())
result = decode_string(input_string)
print(result)