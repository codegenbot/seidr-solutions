def decode_shift(input_string):
    decoded = ""
    for char in input_string:
        decoded += chr(ord(char) - 3)
    return decoded

input_string = input()
print(decode_shift(input_string))