def decode_shift():
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in input()])

print(decode_shift())