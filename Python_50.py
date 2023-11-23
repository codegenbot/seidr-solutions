import sys

def encode_shift(s: str) -> str:
    return "".join(
        [
            chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a"))
            for ch in s
            if ch.isalpha() or ch.isspace()
        ]
    )

def decode_shift(s: str) -> str:
    return "".join(
        [
            chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a"))
            for ch in s
            if ch.isalpha() or ch.isspace()
        ]
    )

if len(sys.argv) != 2:
    print("Usage: python problem.py <input_string>")
    sys.exit(1)

input_string = sys.argv[1]

encoded = encode_shift(input_string)
print("Encoded string:", encoded)

decoded = decode_shift(encoded)
print("Decoded string:", decoded)