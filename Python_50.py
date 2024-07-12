def decode_shift():
    n = int(input("Enter the shift number: "))
    s = input("Enter the encoded string: ")
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s.lower()])