def decode_shift() -> str:
    s = input("Enter the string to decode: ")
    return "".join(
        [
            chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a"))
            if ch.isalpha()
            else ch
            for ch in s
        ]
    )


result = decode_shift()
print(result)