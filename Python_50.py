import sys

def encode_shift(s):
    return "".join(
        [chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a")) for ch in s]
    )


def decode_shift(s):
    return "".join(
        [chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) for ch in s]
    )


def main():
    if len(sys.argv) != 2:
        print("Usage: python code.py <string>")
        return
    
    s = sys.argv[1]
    encoded = encode_shift(s)
    decoded = decode_shift(encoded)
    print("Encoded:", encoded)
    print("Decoded:", decoded)


if __name__ == "__main__":
    main()