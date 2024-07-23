def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalnum():
            if char.isdigit(): 
                encoded_char = char
            elif char.isalpha():
                if char.isupper():
                    encoded_char = chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    encoded_char = chr((ord(char) - 97 + 3) % 26 + 97)
            else:  
                encoded_char = char
        else:  
            encoded_char = char
        
        encoded_message += encoded_char
    
    return encoded_message