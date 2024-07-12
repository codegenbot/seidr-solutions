def decode_shift():
    s = input("Enter the encoded message: ").strip()  
    decoded = ""
    for char in s:
        decoded += chr((ord(char) - 97 + 25) % 26 + 97)
    return decoded

result = decode_shift()
print(result)