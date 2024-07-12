def decode_shift(s):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])

input_string = input().lower().strip()
if input_string.isalpha():
    decoded_string = decode_shift(input_string)
    print(decoded_string)
else:
    print("Please enter a valid lowercase string consisting only of alphabets.")