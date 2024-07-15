input_string = input("Enter the input string: ")
def decode_shift(input_string):
    input_string = input_string.lower()
    decoded_text = ""
    for char in input_string:
        if char.isalpha():
            decoded_text += chr((ord(char) - 3 - ord('a')) % 26 + ord('a'))
        else:
            decoded_text += char
    return decoded_text

print(decode_shift(input_string))