def decode_shift(input_string):
    decoded_text = ""
    for char in input_string:
        if char.isalpha():
            decoded_text += chr((ord(char) - 3 - ord('a')) % 26 + ord('a')
        else:
            decoded_text += char
    return decoded_text

input_string = input("Enter the string to decode: ")
result = decode_shift(input_string)
print(result)