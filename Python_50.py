def decode_shift(s: str):
    return "".join([chr(((ord(ch.lower()) - ord("a")) % 26) + ord("a")) for ch in s])

input_string = input("Enter a string to decode: ")
print(decode_shift(input_string))