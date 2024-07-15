def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s.lower() if ch.isalpha()])

input_string = input("Enter the string to decode: ").replace(" ", "").lower()
print(decode_shift(input_string))