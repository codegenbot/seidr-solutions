def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Read input from user
s = input()

# Call the encode_shift function
encoded = encode_shift(s)
print(encoded)

# Call the decode_shift function
decoded = decode_shift(encoded)
print(decoded)