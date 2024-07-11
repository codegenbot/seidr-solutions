def decode_shift():
    s = input("Enter a string to decode: ")
    result = "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
    return result

decoded_string = decode_shift()
print(decoded_string)