def decode_shift(s):
    result = "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s.lower()])
    return result

input_string = input("Enter a string to decode: ")
decoded_string = decode_shift(input_string)
print(decoded_string)