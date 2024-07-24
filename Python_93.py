def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    
    for char in message:
        if char.isalpha():
            shift_amount = 3 if char.upper() in vowels else 2
            encoded_char = chr((ord(char.upper()) + shift_amount - ord('A')) % 26 + ord('A'))
            encoded_message += encoded_char.lower() if char.islower() else encoded_char
        else:
            encoded_message += char

    return encoded_message