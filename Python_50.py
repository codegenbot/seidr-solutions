def decode_shift():
    s = input("Enter the encoded string: ").strip()
    decoded = ""
    for char in s:
        decoded += chr((ord(char) - 97 - 2) % 26 + 97)  # Subtract 2 instead of adding 25
    return decoded

result = decode_shift()
print(result)