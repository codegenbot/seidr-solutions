def decode_shift():
    s = input("Enter the encoded message: ")
    return "".join([chr(((ord(ch) - ord("a") - 5) % 26) + ord("a")) for ch in s])