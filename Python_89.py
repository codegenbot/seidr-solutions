```
def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            if char.isupper():
                offset = ord('A')
            else:
                offset = ord('a')
            result += chr((ord(char) - offset + ord('e') - ord(char)) % 26 + offset)
        else:  
            result += char
    return result