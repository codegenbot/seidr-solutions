import sys

def decode_shift(s):
    result = "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s.lower()])
    return result

decoded_string = decode_shift(sys.argv[1])
print(decoded_string)