def encode_shift():
    s = input("Enter the string to encode: ")
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift():
    s = input("Enter the string to decode: ")
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


encoded_string = encode_shift()
print("Encoded string:", encoded_string)

decoded_string = decode_shift()
print("Decoded string:", decoded_string)