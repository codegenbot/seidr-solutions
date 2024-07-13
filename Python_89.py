def encrypt(s): 
    result = ""
    for char in s: 
        if char.isalpha(): 
            offset = ord('A') if char.isupper() else ord('a')
            shift = 3
            if char.isupper():
                result += chr((ord(char) - ord('A') + shift) % 26 + ord('A'))
            elif char.islower():
                result += chr((ord(char) - ord('a') + shift) % 26 + ord('a'))
        else:  
            result += char
    return result