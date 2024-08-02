def decode_shift(s: str):
    return "".join(
        [
            chr(
                ((ord(ch) - 5 - ord("a" if ch.islower() else "A")) % 26)
                + ord("a" if ch.islower() else "A")
            )
            for ch in s
        ]
    )


# Enter lowercase letters only
input_str = input("Enter the string to decode (lowercase letters only): ")
decoded_str = decode_shift(input_str)
print(decoded_str)