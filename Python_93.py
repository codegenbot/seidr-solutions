def encode(message):
    encoded_message = ""
    vowels = set("aeiouAEIOU")
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_char = chr((ord(char) - ord('A') + 2) % 26 + ord('A')).upper()
                if char.islower():
                    encoded_message += encoded_char.lower()
                else:
                    encoded_message += encoded_char
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message