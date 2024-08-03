def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if 'a' <= ch <= 'z' else ch for ch in s if ch.isalpha()])

input_string = input("Enter a string to decode: ").lower()
print(decode_shift(input_string))