def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            shift_amount = 3 if char.upper() in vowels else 2 if char.islower() else -1
            encoded_char = chr(((ord(char) - ord('A') + shift_amount) % 26) + ord('A')) if char.isupper() else chr(((ord(char) - ord('a') + shift_amount) % 26) + ord('a'))
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message