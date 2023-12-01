def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = char.upper()
            else:
                encoded_char = char.lower()
                
            if encoded_char in ['a', 'e', 'i', 'o', 'u']:
                encoded_char = chr(ord(encoded_char) + 2)
                
        else:
            encoded_char = char
            
        encoded_message += encoded_char
        
    return encoded_message