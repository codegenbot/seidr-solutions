def decode_shift(input_string):
    decoded_message = ""
    for char in input_string:
        decoded_char = chr(ord(char) + 1)
        decoded_message += decoded_char
    return decoded_message

input_string = list(input("Please enter a string: ").strip())
result = decode_shift(input_string)
print(result)