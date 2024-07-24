def decode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) - 3 - ord("a")) % 26) + ord("a")) if ch.islower() else ch
            for ch in s
        ]
    )

s = input("Enter a string: ").lower()
if s.isalpha():
    print(decode_shift(s))
else:
    print("Input should only contain lowercase alphabets.")