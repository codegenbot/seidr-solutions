def decode_shift(s: str) -> str:
    return "".join(
        [
            chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s
        ]
    )

input_str = input("Enter a string: ")
result = decode_shift(input_str)
print("Decoded string:", result)