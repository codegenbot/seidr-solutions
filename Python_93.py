```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                if char.isupper():
                    encoded_char = chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    encoded_char = chr((ord(char) - 97 + 3) % 26 + 97)
                encoded_message += encoded_char
            else:  
                if char.isnumeric():
                    encoded_char = str(int(char) + 3)
                else:
                    encoded_char = char
                encoded_message += encoded_char
        else:  
            encoded_message += char
    return encoded_message