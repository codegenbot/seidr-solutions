def decode_shift(s: str):
    return "".join((chr((ord(ch) - 5 - ord('a')) % 26 + ord('a')) if ch.islower() else (chr((ord(ch) - 5 - ord('A')) % 26 + ord('A')) if ch.isupper() else ch) for ch in s)

input_str = input("Enter the string to decode: ")
decoded_str = decode_shift(input_str)
print(decoded_str)