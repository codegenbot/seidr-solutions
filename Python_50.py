def decode_shift(input_string):
    decoded_string = ""
    for char in input_string:
        if char.isalpha():
            decoded_string += chr((ord(char) - 3 - ord("a")) % 26 + ord("a"))
        else:
            decoded_string += char
    return decoded_string

input_string = input("Enter the string to decode: ").strip()
result = decode_shift(input_string)
print(result)