input_str = input("Enter the string to decode: ")
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 7 - ord("a")) % 26) + ord("a")) for ch in s])

result = decode_shift(input_str)
print(result)