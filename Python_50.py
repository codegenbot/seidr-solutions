```
def decode_shift():
    s = input("Please enter a string: ")
    decoded = ""
    for ch in s:
        if ch.isalpha():
            if ch.islower():
                decoded += chr((ord(ch) - ord('a') + 23) % 26 + ord('a'))
            else:
                decoded += chr((ord(ch) - ord('A') + 23) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded

print(decode_shift())