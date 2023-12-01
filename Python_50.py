def encode_shift():
    s = input("Enter a string to encode: ")
    encoded = "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])
    print("Encoded string:", encoded)


def decode_shift():
    s = input("Enter a string to decode: ")
    decoded = "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
    print("Decoded string:", decoded)

encode_shift()
decode_shift()