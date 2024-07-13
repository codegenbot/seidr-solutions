def encrypt(s): 
    result = ""
    for char in s: 
        if char.isalpha(): 
            if char.isupper():
                offset = ord('A')
            else:
                offset = ord('a')
            shift = 3
            result += chr((ord(char) - offset + shift) % 26 + offset)
        else:  
            result += char
    return result