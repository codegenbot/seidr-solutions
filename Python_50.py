def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.isalpha()])

input_str = input("Enter the string to decode: ")
while not input_str.isalpha():
    input_str = input("Please enter a valid string without special characters or numbers: ")
decoded_str = decode_shift(input_str)
print(decoded_str)