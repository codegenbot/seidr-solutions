import sys


def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


input_str = input().strip()
encoded_str = encode_shift(input_str)
decoded_str = decode_shift(encoded_str)

sys.stdout.write(encoded_str + "\n")
sys.stdout.write(decoded_str + "\n")