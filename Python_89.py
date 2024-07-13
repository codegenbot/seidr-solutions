def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            if char.isupper():
                shift = 3
                offset = ord('A')
            else:
                shift = 3
                offset = ord('a')
            result += chr((ord(char) - offset + shift) % 26 + offset)
        else:  
            result += char
    return result