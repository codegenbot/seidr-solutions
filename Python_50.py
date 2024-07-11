def decode_shift():
    s = input("Please enter a string: ")
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

print(decode_shift())