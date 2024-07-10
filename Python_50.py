def decode_shift():
    s = input("Enter a shifted string: ")
    d = int(input("Enter the shift value: "))
    return "".join(
        [
            chr(((ord(ch.lower()) - 97 - d) % 26) + 97) if ch.isalpha() else ch
            for ch in s
        ]
    )


print(decode_shift())