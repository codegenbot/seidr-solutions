def decode_shift():
    s = input()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Call the function to decode the input
print(decode_shift())