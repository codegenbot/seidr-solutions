def encode_shift(s: str) -> str:
    return "".join(
        [chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a")) for ch in s]
    )


def decode_shift(s: str) -> str:
    return "".join(
        [chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) for ch in s]
    )


def main():
    s = input("Enter string: ")
    encoded = encode_shift(s)
    print("Encoded string:", encoded)
    decoded = decode_shift(encoded)
    print("Decoded string:", decoded)


if __name__ == "__main__":
    main()