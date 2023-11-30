def encode_shift(s):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


def main():
    s = input("Enter a string: ")
    encoded = encode_shift(s)
    decoded = decode_shift(encoded)
    print(encoded)
    print(decoded)


main()