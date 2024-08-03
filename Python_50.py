def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_string = input("Enter a string to decode: ")
if input_string.isalpha() and input_string.islower():
    print(decode_shift(input_string))
else:
    print("Input string should contain only lowercase letters.")