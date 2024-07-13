```
def decode_shift():
    password = input("Please enter the password: ")
    if len(password) != 1 or not password.isupper():
        raise ValueError("Invalid input. Please enter a single uppercase letter as the password.")
    
    message = input("Please enter the encrypted message: ")
    decoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                decoded_char = chr((ord(char) - ord('A') + int(password)) % 26 + ord('A'))
            else:
                decoded_char = chr((ord(char) - ord('a') + int(password)) % 26 + ord('a'))
            if decoded_char != char:
                return "Invalid input. The message is not a valid Caesar Cipher encryption."
        else:
            decoded_message += char
        decoded_message += decoded_char
    
    return decoded_message