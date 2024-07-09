def decode_shift():
    s = input("Enter the string to decode: ")
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) if ch.islower() else ch for ch in s if ch.isalpha()])

result = decode_shift()
print(result)