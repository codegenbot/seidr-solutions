def decode_shift(s):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])

input_string = input().strip()
if all(char.isalpha() for char in input_string) and input_string.islower():
    decoded_string = decode_shift(input_string)
    print(decoded_string)
else:
    print("Please enter a valid lowercase string consisting only of alphabets.")