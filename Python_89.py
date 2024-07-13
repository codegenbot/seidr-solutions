def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            offset = 65 if char.isupper() else 97
            shift = 3
            result += chr((ord(char) - offset + shift) % 26 + offset)
        else:  
            result += char
    return result