def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""
    
    for char in message:
        if char.isalpha():
            encoded_message += chr(ord(char) + 2) if char.lower() in vowels else chr(ord(char) + 1)
        else:
            encoded_message += char
    
    return encoded_message