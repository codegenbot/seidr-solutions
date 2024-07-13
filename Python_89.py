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
            value = ord(char) - offset
            value = (value + shift) % 26
            result += chr(value + offset)
        else:  
            result += char
    return result