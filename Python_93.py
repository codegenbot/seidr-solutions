def encode(message):
    result = ""
    direction = 1  # Set this flag to 1 for encoding and -1 for decoding
    
    for char in message:
        if char.isalpha():
            if char.isupper():
                base = 65
            else:
                base = 97
                
            if direction == 1:  
                result += chr((ord(char) - base + 2) % 26 + base)
            else: 
                result += chr((ord(char) - base - 2) % 26 + base)
        else:
            result += char
    return result