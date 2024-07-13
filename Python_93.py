```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_char = chr((ord(char.lower()) + 2) % 26 + 97) if char.islower() else chr((ord(char.upper()) + 2) % 26 + 65)
            elif char.islower():
                encoded_message += char.upper()
            else:
                encoded_message += char.lower()
        else:
            encoded_message += char
    return encoded_message