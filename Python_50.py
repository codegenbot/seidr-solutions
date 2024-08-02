def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("z")) % 26) + ord("z")) for ch in s])

input_str = input("Enter the string to decode: ").lower()
decoded_str = decode_shift(input_str)
print(decoded_str)