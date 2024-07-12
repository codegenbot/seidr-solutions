def encode(message):
    encoded_message = ""
    
    for char in message:
        if char.isalpha():
            char_code = ord(char)
            increment = 1 if char.lower() in "aeiou" else 2
            new_code = char_code + increment

            if char.islower() and new_code > ord('z'):
                new_code = (new_code - ord('a') - 1) % 26 + ord('a')
            elif char.isupper() and new_code > ord('Z'):
                new_code = (new_code - ord('A') - 1) % 26 + ord('A')
                
            encoded_message += chr(new_code)
        else:
            encoded_message += char

    return encoded_message