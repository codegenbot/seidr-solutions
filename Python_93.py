def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    
    for char in message:
        if char.isalpha():
            shift_amount = 2 if char.upper() in vowels else 3
            encoded_char = chr((ord(char) + shift_amount - ord('A') if char.isupper() else ord('a')) % 26 + ord('A') if char.isupper() else ord('a'))
            encoded_message += encoded_char
        else:
            encoded_message += char

    return encoded_message