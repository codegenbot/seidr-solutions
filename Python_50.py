def decode_shift(s):
    result = "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
    return result

print(decode_shift("hello"))