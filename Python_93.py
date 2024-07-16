input_char = input("Enter the message to encode: ").strip().upper()
if len(input_char) == 1 and input_char.isalpha() and input_char.isupper():
    encoded_char = chr((ord(input_char) - ord("A") + 2) % 26 + ord("A"))
    print(encoded_char)
else:
    print("Input should contain only a single uppercase alphabetic character.")