def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read user input
s = input()

# Encode the string using the shift algorithm
encoded = encode_shift(s)
print(encoded)

# Decode the string back to the original
decoded = decode_shift(encoded)
print(decoded)