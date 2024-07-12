def decode_shift():
    s = input().strip().lower()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])

decoded_string = decode_shift()
print(decoded_string)