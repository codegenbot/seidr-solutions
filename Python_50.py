```
decode_shift = input("Enter the string: ")
print(decrypt(decode_shift))
def decrypt(decode_shift):
    return "".join(
        [
            (
                chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a"))
                if ch.isalpha() and ch.lower() >= "a" and ch.lower() <= "z"
                else ch
            )
            for ch in decode_shift
        ]
    )