def decode_shift(input_string):
    decoded_string = ""
    for char in input_string:
        if char.isalpha():
            decoded_string += chr((ord(char.lower()) - 3 - ord("a")) % 26 + ord("a"))
        else:
            decoded_string += char
    return decoded_string

input_string = raw_input("Enter the string to decode: ")
result = decode_shift(input_string)
print(result)