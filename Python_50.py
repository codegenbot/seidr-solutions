import sys


def encode_shift(s: str) -> str:
    if not s:
        return "Input string is empty"
    try:
        return "".join(
            [
                chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a"))
                for ch in s
                if ch.isalpha() or ch.isspace()
            ]
        )
    except:
        return "Invalid input"


def decode_shift(s: str) -> str:
    if not s:
        return "Input string is empty"
    try:
        return "".join(
            [
                chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a"))
                for ch in s
                if ch.isalpha() or ch.isspace()
            ]
        )
    except:
        return "Invalid input"


user_input = sys.stdin.read().strip("\n")

encoded = encode_shift(user_input)
print(encoded)

decoded = decode_shift(encoded)
print(decoded)