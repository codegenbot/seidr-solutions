```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            else:
                if char.isupper():
                    encoded_char = char.swapcase()
                else:
                    encoded_char = char.upper()
        else:
            encoded_char = char
            
        encoded_message += encoded_char
    
    return encoded_message