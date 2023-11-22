def decode_shift():
    s = input("Enter the encoded string: ")
    decoded_string = "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s
        ]
    )
    print("Decoded string:", decoded_string)


decode_shift()