def encode_shift():
    s = input()
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift():
    s = input()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

encoded_string = encode_shift()
print(encoded_string)

decoded_string = decode_shift()
print(decoded_string)