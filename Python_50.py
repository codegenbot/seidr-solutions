def decode_shift(s):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])

input_string = input("Enter a string to decode: ")
if input_string.isalnum():
    decoded_string = decode_shift(input_string.lower())
    print(decoded_string)
else:
    print("Input string should not contain whitespaces or special characters.")