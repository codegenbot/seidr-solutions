def decode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.islower() else ch
            for ch in s
        ]
    )

s = input("Enter the string to decode:")
if s:
    print(decode_shift(s))
else:
    print("Input string is empty. Please provide a valid string.")