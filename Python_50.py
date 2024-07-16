def decode_shift(s: str):
    if not any(char.isalpha() for char in s):
        return "Input must contain at least one alphabetic character"

    return "".join(
        [
            (
                ch
                if not ch.isalpha()
                else chr(
                    ((ord(ch) - 3 - ord("a" if ch.islower() else "A")) % 26)
                    + ord("a" if ch.islower() else "A")
                )
            )
            for ch in s
        ]
    )

input_str = input("Enter a string to decode: ").strip()
result = decode_shift(input_str)
print(result)