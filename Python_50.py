def decode_shift(input_string):
    decoded_message = ""
    for char in input_string:
        if char.islower():
            decoded_char = chr(ord(char) - 1)  # Change + 1 to - 1 for decoding
            decoded_message += decoded_char
    return decoded_message

input_string = input("Enter the string to decode (lowercase alphabets only): ").strip().lower()
result = decode_shift(input_string)
print(result)