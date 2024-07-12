def decode_shift(s):
    return "".join([chr((ord(ch) - 5 - ord('a')) % 26 + ord('a') if ch.islower() else chr((ord(ch) - 5 - ord('A')) % 26 + ord('A')) if ch.isupper() else ch for ch in s])

input_string = input("Enter a lowercase string to decode: ").strip()

if input_string.islower() and input_string.isalpha():
    decoded_string = decode_shift(input_string)
    print(decoded_string)
else:
    print("Please enter a lowercase string only.")