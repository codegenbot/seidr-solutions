def decode_shift(input_string):
    decoded_string = ""
    for char in input_string:
        if char.isalpha():
            shift = 3
            base = ord('a') if char.islower() else ord('A')
            decoded_char = chr((ord(char) - shift - base) % 26 + base)
            decoded_string += decoded_char
        else:
            decoded_string += char
    return decoded_string


input_string = input("Enter the string to decode: ")
result = decode_shift(input_string)
print(result)