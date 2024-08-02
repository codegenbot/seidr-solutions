def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_str = input("Enter the string to decode: ")
if input_str.isalpha() and input_str.islower():
    decoded_str = decode_shift(input_str)
    print(decoded_str)
else:
    print("Input string must only contain lowercase alphabetic characters.")