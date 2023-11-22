def decode_shift(s: str) -> str:
    decoded_string = "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.islower() else ch
            for ch in s
        ]
    )
    return decoded_string

s = input("Enter the encoded string: ")
decoded_string = decode_shift(s)
print("Decoded string:", decoded_string)