def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char.lower()) + 1 - ord('a')) % 26 + ord('a'))
                encoded_message += new_char.lower() if char.islower() else new_char.upper()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message