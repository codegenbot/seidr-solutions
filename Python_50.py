def decode_shift():
    s = input("Enter the string to decode: ")
    if not s.islower():
        print("Input string should contain only lowercase letters.")
        return
    return "".join([chr(((ord(ch) - ord("a") - 5) % 26) + ord("a")) for ch in s])