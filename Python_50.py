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


input_string = input()

encoded_string = encode_shift(input_string)
print(encoded_string)

decoded_string = decode_shift(encoded_string)
print(decoded_string)