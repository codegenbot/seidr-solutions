def decode_shift():
    s = input("Enter a string in lowercase: ").lower()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") for ch in s])