def decode_shift(encoded):
    for i in range(26):
        decoded = "".join([chr(((ord(ch) - 97 + 26 - i) % 26) + 97) if ch.isalpha() else ch for ch in encoded])
        if 'z' not in decoded and 'Z' not in decoded:
            return decoded
    return "No solution"

encoded = input("Enter the encoded string: ")
print(decode_shift(encoded))