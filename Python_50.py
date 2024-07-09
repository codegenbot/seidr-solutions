def decode_shift():
    s = input("Enter the string to decode: ")
    if not s.isalpha():
        return "Input should contain only alphabetic characters."
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])