def decode_shift(s: str) -> str:
    return "".join(
        [
            chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a"))
            if ch.isalpha()
            else ch
            for ch in s
        ]
    )

input_str = input("Enter a string to decode: ")  # Add a prompt message here
decoded_str = decode_shift(input_str)
print(decoded_str)