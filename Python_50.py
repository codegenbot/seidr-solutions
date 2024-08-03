def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a") - 3) % 26) + ord("a")) for ch in s])


input_string = input("Enter a string to decode: ")
print(decode_shift(input_string))