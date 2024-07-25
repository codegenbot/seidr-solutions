def decode_cyclic():
    while True:
        s = input("Enter a cyclically encoded string: ")
        if len(s) % 3 == 0 and all(c.isalpha() for c in s[:2]) and all(c.isalnum() or c.isspace() for c in s):
            decoded_str = ""
            for i in range(0, len(s), 3):
                decoded_str += chr((ord(s[i]) - ord('A')) * 3 + (ord(s[i+1]) - ord('A')) % 26 + ord(s[i+2]))
            return decoded_str
        else:
            continue

result = decode_cyclic()
if result is not None:
    print(result)