def decode_shift():
    s = input("Enter the string to decode: ")
    return "".join([chr(((ord(ch) - ord("a") - 5) % 26) + ord("a")) for ch in s])