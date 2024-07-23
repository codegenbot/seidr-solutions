```Python
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                if char.isupper():
                    shift = 65
                else:
                    shift = 97
                
                if char.isalpha():
                    encoded_char = chr((ord(char) - shift + 3) % 26 + shift)
                else:
                    encoded_char = char.lower()
            else:  
                encoded_char = char
        else:  
            encoded_char = char
        
        encoded_message += encoded_char
    
    return encoded_message