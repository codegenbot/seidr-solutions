def decode_shift():
    print("Enter the encoded message:")
    s = input()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])