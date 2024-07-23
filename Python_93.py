def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                if char.isupper():
                    encoded_char = chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    encoded_char = chr((ord(char) - 97 + 3) % 26 + 97)
            else:  
                encoded_char = chr((ord(char) - 48 + 3) % 10 + 48) if char.isdigit() else char
        else:  
            encoded_message += char
        
        encoded_message += encoded_char
    
    return encoded_message