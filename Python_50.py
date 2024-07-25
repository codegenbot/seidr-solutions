def decode_shift():
    s = input().strip().lower()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

decoded_str = decode_shift()
print(decoded_str)