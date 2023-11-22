def decode_shift(s: str) -> str:
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.islower() else ch
            for ch in s
        ]
    )

s = input("Enter the string to be decoded: ")
decoded_string = decode_shift(s)
print(decoded_string)