def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            char_val = ord(char)
            shift_val = 2 if char in vowels else 1 if char.islower() else -1
            encoded_message += chr(((char_val - ord('a') + shift_val) % 26) + ord('a')) if char.islower() else chr(((char_val - ord('A') + shift_val) % 26) + ord('A')
        else:
            encoded_message += char
    return encoded_message