def encode(message, shift):
    encoded_message = ""
    
    for char in message:
        if char.isalpha():
            char_code = ord(char)
            increment = shift if char.lower() not in "aeiou" else 2*shift
            new_code = (char_code - ord('a' if char.islower() else 'A') + increment) % 26 + ord('a' if char.islower() else 'A')
                
            encoded_message += chr(new_code)
        else:
            encoded_message += char

    return encoded_message.lower()