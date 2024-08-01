input_string = input("Enter a lowercase alphabetic string to decode: ")
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") ) for ch in s])

print(decode_shift(input_string))