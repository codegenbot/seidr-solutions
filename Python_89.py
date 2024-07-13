def encrypt(s): 
    result = ""
    for char in s: 
        if char.isalpha(): 
            offset = ord('A') if char.isupper() else ord('a')
            shift = 3
            result += chr((ord(char) - offset + shift) % 26 + offset)
        else:  
            result += char
    return result