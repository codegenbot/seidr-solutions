def encrypt(s): 
    result = ""
    for char in s: 
        if char.isalpha(): 
            offset = 65 if char.isupper() else 97
            shift = 3 if not char.isupper() else 0
            result += chr((ord(char) - offset + shift) % 26 + offset)
        else:  
            if char.isdigit():  
                result += char
            elif char in '/.:!?,";\'-_:':
                result += char
            else:
                result += char  
    return result