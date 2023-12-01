def encode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


def main():
    s = input()
    print(encode_shift(s))
    print(decode_shift(s))


main()