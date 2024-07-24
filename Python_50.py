def decode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.islower() else ch
            for ch in s
            if ch.islower()
        ]
    )


s = input("Enter the string to decode (lowercase alphabets only): ")
print(decode_shift(s))