
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

user_input = input("Enter a string to decode: ")
output = decode_shift(user_input)
print("Decoded Text:", output)