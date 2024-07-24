def decode_shift():
    s = input("Enter the encoded string: ")
    return "".join([chr(((ord(ch.lower()) - ord('a')) + shift) % 26) if ch.isalpha() else ch for shift in [int(s[i:i+3]) for i in range(0, len(s), 3)] + [ch] for ch in s])