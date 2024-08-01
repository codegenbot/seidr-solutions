def decode_shift(s: str):
    s = s.lower()
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_string = input("Enter the string to decode: ").lower()
print(decode_shift(input_string))