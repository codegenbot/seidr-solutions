def decode_shift():
    password = input("Please enter the password: ")
    if len(password) != 1 or not password.isupper():
        raise ValueError("Invalid input. Please enter a single uppercase letter as the password.")
    
    message = input("Please enter the encrypted message: ")
    decoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                shift = ord(password[0]) - ord('A')
                decoded_message += chr((ord(char) - ord('A') + shift) % 26 + ord('A'))
            else:
                shift = ord(password[0]) - ord('A')
                decoded_message += chr((ord(char) - ord('a') + shift) % 26 + ord('a'))
        else:
            decoded_message += char
    
    return decoded_message