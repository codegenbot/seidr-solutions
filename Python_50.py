def decode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s
        ]
    )

s = input()
decoded_string = decode_shift(s)
print(decoded_string)