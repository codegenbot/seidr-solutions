def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


s = input("Enter the string: ")
encoded_string = encode_shift(s)
decoded_string = decode_shift(encoded_string)

print(f"Encoded string: {encoded_string}")
print(f"Decoded string: {decoded_string}")