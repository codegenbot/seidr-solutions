def decode_shift(s):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])

input_string = input("Enter a lowercase string to decode: ").strip().lower()

if input_string and input_string.isalpha() and input_string.islower():
    decoded_string = decode_shift(input_string)
    print(decoded_string)
else:
    print("Please enter a non-empty lowercase string only.")