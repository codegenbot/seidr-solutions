def decode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.islower() else ch
            for ch in s
        ]
    )

s = input("Enter a string: ").lower().strip()  # add .strip() to remove leading/trailing whitespaces
if s.isalpha() and s.islower():  # check both if input is alphabetic and lowercase
    print(decode_shift(s))
else:
    print("Input should only contain lowercase alphabets.")