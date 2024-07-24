```
def encrypt(s):
    result = ''
    for char in s:
        if char.isalpha():
            if char.isupper():
                base = ord('A')
            else:
                base = ord('a')
            result += chr((ord(char) - base + 2*2)%26 + base)
        else:
            result += char
    return result