
def decode_shift(s):
    s = s.lower() # Convert to lowercase
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])