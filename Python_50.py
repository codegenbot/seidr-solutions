def decode_shift():
    s = input("Enter the encoded message: ")
    return "".join([chr(((ord(ch) - 5 - ord("A")) % 26) + ord("A")) for ch in s])