def decode_shift(s):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])

while True:
    input_string = input("Enter a lowercase string to decode: ").strip().lower()
    if input_string.isalpha() and input_string.islower():
        decoded_string = decode_shift(input_string)
        print(decoded_string)
        break
    else:
        print("Please enter a valid lowercase string consisting only of alphabets.")