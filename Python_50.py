def decode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.islower() else ch
            for ch in s
        ]
    )

s = input("Enter a string: ").lower()  # Convert the input string to lowercase
if s.islower():  # Check if the input string only contains lowercase alphabets
    print(decode_shift(s))
else:
    print("Input should only contain lowercase alphabets.")