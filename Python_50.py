def decode_shift(input_string):
    decoded_message = ""
    for char in input_string:
        if char.islower():
            decoded_char = chr((ord(char) - 1 - ord('a')) % 26 + ord('a'))
        elif char.isupper():
            decoded_char = chr((ord(char) - 1 - ord('A')) % 26 + ord('A'))
        else:
            decoded_char = char
        decoded_message += decoded_char
    return decoded_message

input_string = input("Enter the string to decode: ")
print(decode_shift(input_string))