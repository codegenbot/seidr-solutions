def decode_shift():
    s = input("Enter the encoded string (lowercase alphabets only, no spaces): ").strip()
    decoded = ""
    for char in s:
        decoded += chr((ord(char) - 97 + 25) % 26 + 97)
    return decoded

result = decode_shift()
print(result)