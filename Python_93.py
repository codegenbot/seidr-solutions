input_string = input("Enter the message to encode: ")
if input_string.isalpha() and input_string.isupper() and len(input_string) == 1:
    encoded_char = chr((ord(input_string) - ord("A") + 2) % 26 + ord("A"))
    print(encoded_char)
else:
    print("Input should contain only a single uppercase alphabetic character.")