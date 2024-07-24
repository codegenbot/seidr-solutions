def decode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.islower() else ch
            for ch in s
        ]
    )

s = input("Enter a string: ").strip()
if s.islower():
    print(decode_shift(s))
    else:
        print("Input string should contain only lower case alphabets.")