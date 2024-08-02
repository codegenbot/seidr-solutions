def decode_shift(s):
    decoded_message = "".join(
        [chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s]
    )
    return decoded_message

encoded_message = input().strip()
decoded_message = decode_shift(encoded_message)
print(decoded_message)