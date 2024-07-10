def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                offset = -2 if char.lower() in vowels[:5] else 2  # Check for lowercase vowels
                encoded_message += chr((ord(char) - ord('A' if char.isupper() else 'a') + offset) % 26 + ord('A')).upper()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += ' '
    return encoded_message