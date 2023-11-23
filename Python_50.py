def encode_shift(s: str) -> str:
    try:
        return "".join(
            [
                chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a"))
                for ch in s
                if ch.isalpha() or ch.isspace()
            ]
        )
    except Exception:
        return "Invalid input"


def decode_shift(s: str) -> str:
    try:
        return "".join(
            [
                chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a"))
                for ch in s
                if ch.isalpha() or ch.isspace()
            ]
        )
    except Exception:
        return "Invalid input"


user_input = input("Enter a message: ")

encoded = encode_shift(user_input)
print(encoded)

decoded = decode_shift(encoded)
print(decoded)