def encrypt(s): 
    result = ""
    for char in s: 
        if char.isalpha(): 
            offset = 65 if char.isupper() else 97
            shift = 3 if char.isupper() else 3 if char.islower() else 0
            result += chr((ord(char) - offset + shift) % 26 + offset)
        else:  
            result += char  
    return result