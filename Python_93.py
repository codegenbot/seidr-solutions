input_string = input("Enter the message to encode: ")
if input_string.isalpha() and input_string.isupper():
    encoded_message = ''
    for char in input_string:
        encoded_message += chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
    print(encoded_message)
else:
    print("Input should contain only uppercase alphabetic characters.")