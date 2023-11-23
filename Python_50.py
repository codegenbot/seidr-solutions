def encode_shift(s):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

def decode_shift(s):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

s = input()
encoded_string = encode_shift(s)
print(encoded_string)
s = input()
decoded_string = decode_shift(s)
print(decoded_string)