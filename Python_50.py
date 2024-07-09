def decode_shift():
    s = input("Enter the encoded message: ")
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])